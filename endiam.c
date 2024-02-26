#include <stdio.h>

int main(void)
{
     unsigned int e = 0b101010100000000011111111;
     unsigned char *e_ad = (unsigned char *)&e;

     printf("Hexadecimal representation bajtu je: %x\n", *e_ad);
     if (*e_ad == 0b11111111)
     {
          printf("Little endian.\n");
     }
     else
     {
          printf("Big endian.\n");
     }

     return 0;
}