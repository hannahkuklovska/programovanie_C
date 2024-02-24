#include <stdio.h>

int main()
{
     unsigned short int e = 1234;
     unsigned short int n = &e;

     printf("Adresa %u je: %p \n", e, &e);
     printf("Potom: %u \n", n);

     return 0;
}