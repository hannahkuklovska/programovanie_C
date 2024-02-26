#include <stdio.h>

int main(void)
{
     unsigned int e = 3;      // 00 00 00 11 (binarna sustava)
     char *e_ad = (char *)&e; // pointer na adresu e, ale e uz teraz pretypovane na char

     printf("%x\n", e_ad);

     if (*e_ad == 3)
     {
          printf("Little endian.\n");
     }
     else if (*e_ad == 0)
     {
          printf("Big endian.\n");
     }

     else
     {
          printf("Niečo sa pokazilo.\n");
     }

     return 0;
}