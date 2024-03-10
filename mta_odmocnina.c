#include <stdio.h>

double mta_odmocnina(unsigned int m, double x);
double mocnina(double mocnenec, int exponent);

int main(void)
{
}

double mta_odmocnina(unsigned int m, double x)
{
     if (m == 0 || (x < 0 && m % 2 == 0))
     {
          return 1;
     }

     int vysledok;
     for (int i = 0; i < m; i++)
     {
          vysledok = mocnina(x, 1 / m);
     }
     return vysledok;
}

double mocnina(double mocnenec, int exponent)
{
     double vysledok = 1;
     for (int i = 0; i < exponent; i++)
     {
          vysledok *= mocnenec;
     }
     return vysledok;
}