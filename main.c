#include <stdio.h>

int * otherfunc(int a, int b)
{
    if (a > 4) return 0;
}


int main() {
   // printf() displays the string inside quotation

   int * pointer = otherfunc(7, 2);

   *pointer = 0xDEADBEEF;
   printf("Hello, World!");
   return 0;
}
