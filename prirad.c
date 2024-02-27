#include <stdio.h>

int main()
{

     unsigned short int h = 300; // 16 bitov //00000001 00101100
     unsigned char ch;           // 8 bitov
     printf("Veľkosť unsigned char: %u\n", sizeof(unsigned char));
     printf("Veľkosť unsigned short int: %u\n", sizeof(unsigned short int));
     ch = (unsigned char)h; // pretypovanie

     printf("Hodnota pred: %u \n", h);
     printf("Adresa pred: %p \n", &h);
     printf("Hodnota po: %u \n", ch);
     printf("Adresa po: %p \n", &ch);

     return 0;

     // doslo k strate hodnoty, ulozila sa mensia hodnota, strata 300, po pretypovani vyjde 44 (300-256)
     // zostala iba hodnota 8 bitov (least significant)
     // cita tym padom z prava do lava (44 v binarnej sustave je 00101100), ostatne hodnoty sa stratia
}