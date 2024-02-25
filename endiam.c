#include <stdio.h>

int main()
{
     unsigned short int e = 1234;
     unsigned char *n = &e;

     printf("Adresa %u je: %p \n", e, &e);
     printf("Potom: %p \n", &n);

     return 0;
}