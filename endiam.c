#include <stdio.h>

int main()
{
     unsigned short int e = 12;
     unsigned short int g = e + 1;
     unsigned char *ea = (unsigned char *)&e;
     unsigned char *ga = (unsigned char *)&g;

     // adresa prveho bytu;
     if ((ga) < ea)
     {
          printf("Little endian.\n");
     }
     else
     {
          printf("Big endian.\n");
     }

     return 0;
}