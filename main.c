#include <stdio.h>

int * otherfunc(int a, int b)
{
    return 0;
}

int main() {
   int * pointer = 0;
   otherfunc(7, 2);

   *pointer = 0xDEADBEEF;
   printf("Hello, World!");
   return 0;
}
