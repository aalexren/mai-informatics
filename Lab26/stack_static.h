#ifndef LAB26_STACK_STATIC_H
#define LAB26_STACK_STATIC_H

typedef struct {
   int size;
   int *array;
} SStack;

void init(SStack *stack);
int empty(const SStack *stack);
void push(SStack *stack, int value);
void pop(SStack *stack);
int peak(const SStack *stack);
int size(SStack *stack);
void print(const SStack *stack);
void spswap(SStack *stack); // special swap
void sort(SStack *stack);

#endif //LAB26_STACK_STATIC_H
