#include <stdio.h>

int mta_odmocnina(unsigned int m, double x);

int main(void)
{
}

int mta_odmocnina(unsigned int m, double x)
{
     if (m == 0)
     {
          return 1;
     }

     if (x < 0 && m % 2 == 0) // pracujem len v R číslach
     {
          return 1;
     }
}