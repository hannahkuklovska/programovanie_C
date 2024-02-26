#include <stdio.h>

int main(void)
{
     unsigned int e = 3; // 00 00 00 11 (binarna sustava)
     // resp. 00000000 00000000 00000000 00000011 (3 v 32bitoch)
     char *e_ad = (char *)&e; // pointer na adresu e, ale e uz teraz pretypovane na char, e_ad ukazuje na prvy bajt pamate, kde je ulozene e
     // na char, aby sme to mohli citat po bajte

     if (*e_ad == 3) // je hodnota prveho bajtu 3? //00 00 00 11
     {
          printf("Little endian.\n");
     }
     else if (*e_ad == 0) // 00 00 00 00
     {
          printf("Big endian.\n");
     }

     else
     {
          printf("Niečo sa pokazilo.\n");
     }

     return 0;
}