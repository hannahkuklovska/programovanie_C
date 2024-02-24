#include <stdio.h>

int main()
{

     unsigned short int h = 300;
     unsigned char ch;

     ch = (unsigned char)h;

     printf("Hodnota pred: %u \n", h);
     printf("Hodnota po: %u \n", ch);

     return 0;
}