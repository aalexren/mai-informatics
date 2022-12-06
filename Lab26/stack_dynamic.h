#ifndef LAB26_STACK_DYNAMIC_H
#define LAB26_STACK_DYNAMIC_H

typedef struct Item_{
   struct Item_* next;
   int value;
} Item;

typedef struct {
   int size;
   Item* root;
} DStack;

void init(DStack *stack);
int empty(const DStack *stack);
void push(DStack *stack, int value);
void pop(DStack *stack);
int peak(const DStack *stack);
int size(DStack *stack);
void print(const DStack *stack);
void spswap(DStack *stack); // special swap
void sort(DStack *stack);

#endif //LAB26_STACK_DYNAMIC_H
