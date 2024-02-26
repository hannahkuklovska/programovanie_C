#include <stdio.h>

int main(void)
{
     unsigned int e = 0b00000011;
     unsigned char *e_ad = (unsigned char *)&e;
     if (*e_ad == 0b11)
     {
          printf("Little endian.\n");
     }
     else
     {
          printf("Big endian.\n");
     }

     return 0;
}