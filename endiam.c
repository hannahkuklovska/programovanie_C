#include <stdio.h>

int main()
{

     unsigned int e = 1;

     // ale chcem vedieť jeho adresu, nie hodnotu (per se)
     printf("Hodnota je: %p \n", &e);

     return 0;
}