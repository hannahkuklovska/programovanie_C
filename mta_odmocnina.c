#include <stdio.h>

double mta_odmocnina(int m, double x);
double mocnina(double mocnenec, int exponent);

int main(void)
{
     int m = 2;
     double x = 8;

     double vysledok = mta_odmocnina(m, x);
     printf("%lf\n", vysledok);

     return 0;
}

double mta_odmocnina(int m, double x)
{
     if (m == 0 || (x < 0 && m % 2 == 0))
     {
          return 1;
     }

     double vysledok = mocnina(x, 1.0 / m);
     return vysledok;
}

double mocnina(double mocnenec, int exponent)
{
     double vysledok = 1.0;
     for (int i = 0; i < exponent; i++)
     {
          vysledok *= mocnenec;
     }
     return vysledok;
}