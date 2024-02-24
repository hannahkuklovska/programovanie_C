#include <stdio.h>

int main()
{

     unsigned int e = 1;
     unsigned int n = 1000;

     // ale chcem vedieť jeho adresu, nie hodnotu (per se)
     printf("Adresa %u je: %p \n", e, &e);
     printf("Adresa %u je: %p \n", n, &n);

     return 0;
}