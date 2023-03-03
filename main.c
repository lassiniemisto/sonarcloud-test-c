#include <stdio.h>

int otherfunc(int a, int b)
{
    if (a > 4) return 6;
}


int main() {
   // printf() displays the string inside quotation


   otherfunc(1, 2);

   int * pointer = 0;
   *pointer = 0xDEADBEEF;
   printf("Hello, World!");
   return 0;
}
