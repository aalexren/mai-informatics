#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include "stack_dynamic.h"
#include "stack_static.h"

int main() {
   SStack sstack;
   init(&sstack);
   srand(time(0));
   for (int i = 0; i < 10; ++i) {
      push(&sstack, rand()%20);
   }
   print(&sstack);
   sort(&sstack);
   print(&sstack);
//   DStack dstack;
//   init(&dstack);
//   push(&dstack, 4);
//   push(&dstack, 2);
//   push(&dstack, 3);
//   push(&dstack, 5);
//   push(&dstack, 1);
//   print(&dstack);
//   sort(&dstack);
//   print(&dstack);
//   int s = size(&dstack);
//   for (int i = 0; i < s; ++i) {
//      pop(&dstack);
//   }
//   push(&dstack, 49);
//   push(&dstack, 95);
//   push(&dstack, 58);
//   push(&dstack, 6);
//   push(&dstack, 29);
//   push(&dstack, 69);
//   push(&dstack, 81);
//   push(&dstack, 78);
//   push(&dstack, 11);
//   push(&dstack, 37);
//   print(&dstack);
//   sort(&dstack);
//   print(&dstack);
//
//   return 0;
//   SStack sstack;
//   init(&sstack);
//   push(&sstack, 4);
//   push(&sstack, 2);
//   push(&sstack, 3);
//   push(&sstack, 5);
//   push(&sstack, 1);
//   print(&sstack);
//   sort(&sstack);
//   print(&sstack);
//   int s = size(&sstack);
//   for (int i = 0; i < s; ++i) {
//      pop(&sstack);
//   }
//   push(&sstack, 49);
//   push(&sstack, 95);
//   push(&sstack, 58);
//   push(&sstack, 6);
//   push(&sstack, 29);
//   push(&sstack, 69);
//   push(&sstack, 81);
//   push(&sstack, 78);
//   push(&sstack, 11);
//   push(&sstack, 37);
//   print(&sstack);
//   sort(&sstack);
//   print(&sstack);

   return 0;
}
