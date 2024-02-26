#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     unsigned short int e = 21;
     unsigned short int g = 32;
     unsigned char *ea = (unsigned char *)&e;
     unsigned char *ga = (unsigned char *)&g;

     // adresa prveho bytu;
     if (ga < ea)
     {
          printf("Little endian.\n");
     }
     else
     {
          printf("Big endian.\n");
     }

     // pointer na zaciatocny bod (char *s) je string
     string s = "Ahoj!";
     printf("%c\n", s[0]);
     char *c =
         // adresa prveho bytu;
         if ()
     {
          printf("Little endian.\n");
     }
     else
     {
          printf("Big endian.\n");
     }

     return 0;
}