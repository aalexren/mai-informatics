#include "stack_static.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(SStack* stack) {
   stack->size = 0;
   stack->array = NULL;
}

int empty(const SStack *stack) {
   return stack->size == 0;
}

void push(SStack *stack, int value) {
   if (empty(stack)) {
      stack->array = malloc(sizeof(int));
      stack->size = 1;
      stack->array[stack->size-1] = value;
      return;
   }

   stack->array = realloc(stack->array, (stack->size + 1) * sizeof(int));
   stack->size += 1;
   stack->array[stack->size - 1] = value;
}

void pop(SStack *stack) {
   if (empty(stack)) {
      return;
   }

//   if (stack->size == 1) {
//      free(stack->array);
//      stack->array = 0;
//      stack->size = 0;
//      return;
//   }

   stack->array = realloc(stack->array, (stack->size - 1) * sizeof(int));
   stack->size -= 1;
}

int peak(const SStack *stack) {
   if (empty(stack)) {
      return 0;
   }

   return stack->array[stack->size - 1];
}

int size(SStack *stack) {
   
   return stack->size;
}

void print(const SStack *stack) {
   printf("[---> ");
   for (int i = 0; i < stack->size; ++i) {
      printf("%-4d", stack->array[stack->size - i - 1]);
   }
   printf("]\n");
}

void spswap(SStack *stack) {
   SStack temp; init(&temp);
   SStack copy; init(&copy);
   copy.array = malloc(sizeof(int) * stack->size);
   memcpy(copy.array, stack->array, stack->size * sizeof(int));
   copy.size = stack->size;
   
   while (!empty(&copy)) {
      int buf = peak(&copy);
      pop(&copy);
      if (peak(&copy) > buf) {
         push(&temp, peak(&copy));
         push(&temp, buf);
         pop(&copy);
         break;
      }
      else {
         push(&temp, buf);
      }
   }
   
   while (!empty(&temp)) {
      push(&copy, peak(&temp));
      pop(&temp);
   }
   
   memcpy(stack->array, copy.array, stack->size * sizeof(int));
   free(temp.array);
   free(copy.array);
}

void sort(SStack *stack) {
   for (int i = 0; i < stack->size; ++i) {
      for (int j = i; j < stack->size; ++j) {
         spswap(stack);
      }
   }
}