#include "stack_dynamic.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void init(DStack *stack) {
   stack->size = 0;
   stack->root = malloc(sizeof(Item));
}

int empty(const DStack *stack) {
   return stack->size == 0;
}

void push(DStack *stack, int value) {
   if (empty(stack)) {
       stack->size = 1;
       if (stack->root == NULL) {
         stack->root = malloc(sizeof(Item));
       }
       stack->root->value = value;
       return;
   }
   
   Item *item = malloc(sizeof(Item));
   item = stack->root;
   for (int i = 0; i < stack->size - 1; ++i) {
      item = item->next;
   }
   item->next = malloc(sizeof(Item));
   item->next->value = value;
   stack->size += 1;
//   free(item);
}

void pop(DStack *stack) {
   if (empty(stack)) {
      return;
   }
   
   if (stack->size == 1) {
      stack->size = 0;
      free(stack->root);
      stack->root = NULL;
      return;
   }
   
   Item *item = malloc(sizeof(Item));
   item = stack->root;
   for (int i = 0; i < stack->size - 2; ++i) {
      item = item->next;
   }
   free(item->next);
   item->next = NULL;
   stack->size -=1;
}

int peak(const DStack *stack) {
   if (empty(stack)) {
      return 0;
   }
   
   Item *item = malloc(sizeof(Item));
   item = stack->root;
   for (int i = 0; i < stack->size - 1; ++i) {
      item = item->next;
   }
   
//   free(item);
   return item->value;
}

int size(DStack *stack) {
   return stack->size;
}

void print(const DStack *stack) {
   if (empty(stack)) {
      printf("Stack is empty...\n");
      return;
   }
   
   printf("[---> ");
   
   DStack copy; init(&copy);
   Item *item = malloc(sizeof(Item));
   item = stack->root;
   for (int i = 0; i < stack->size; ++i) {
      push(&copy, item->value);
      item = item->next;
   }
   
   DStack temp; init(&temp);
   for (int i = 0; i < stack->size; ++i) {
      push(&temp, peak(&copy));
      pop(&copy);
   }
   
   item = temp.root;
   for (int i = 0; i < temp.size; ++i) {
      printf("%-4d", item->value);
      item = item->next;
   }
   
   printf("]\n");
}

void spswap(DStack *stack) {
   DStack temp; init(&temp);
   DStack copy; init(&copy);
   Item *item = malloc(sizeof(Item));
   item = stack->root;
   for (int i = 0; i < stack->size; ++i) {
      push(&copy, item->value);
      item = item->next;
   }
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
   
   int count = stack->size;
   for (int i = 0; i < count; ++i) {
      pop(stack);
   }
   item = copy.root;
   for (int i = 0; i < count; ++i) {
      push(stack, item->value);
      item = item->next;
   }
}

void sort(DStack *stack) {
   for (int i = 0; i < stack->size; ++i) {
      for (int j = i; j < stack->size; ++j) {
         spswap(stack);
      }
   }
}