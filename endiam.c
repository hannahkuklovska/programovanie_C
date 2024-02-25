#include <stdio.h>

int main()
{
     unsigned short int e = 12;
     unsigned char ea = &e; // ulozenie adresy;
     // potrebujem sa dostať k adrese bajtu, ci je adresa 1 mensia ako
     // adresa 2, ak ano, je to LE, ak nie BE

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