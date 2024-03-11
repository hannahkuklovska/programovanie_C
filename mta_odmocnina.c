#include <stdio.h>

#define tol 0.0001
#define abs(n) (((n) < 0) ? -(n) : (n))
#define hod 10000

double mta_odmocnina(int m, double x);
double mocnina(double mocnenec, double exponent);

int main(void)
{
     double x;
     int m;

     printf("Zadajte cislo: ");
     scanf("%d", &x);

     printf("Zadajte odmocninu (m): ");
     scanf("%d", &m);

     if (m < 0)
     {
          printf("Chyba: Odmocnina zo zaporneho cisla.\n");
          return -1;
     }

     printf("%dta odmocnina z %lf je: %lf\n", m, x, mta_odmocnina(m, x));

     return 0;
}

double mta_odmocnina(int m, double x)
{
     if (m == 0)
     {
          printf("Chyba: Vypocet nultej odmocniny.\n");
          return 1;
     }

     if (x < 0 && m % 2 == 0)
     {
          printf("Chyba: Vypocet parnej odmocniny zo zaporneho cisla.\n");
          return 1;
     }

     double pomoc = 1.0;

     for (int i = 0; i < m; i++)
     {
          if (pomoc * pomoc > x)
          {
               break;
          }
          pomoc += tol;
     }
     int i = hod;
     while (i > 0 && abs(mocnina(pomoc, m) - x) > tol)
     {
          pomoc -= tol;
          i--;
     }
     return pomoc;
}

double mocnina(double mocnenec, double exponent)
{
     if (exponent == 0)
     {
          return 1;
     }

     if (mocnenec == 0)
          return 0;

     double vysledok = 1.0;

     for (int i = 0; i < abs(exponent); i++)
     {
          vysledok *= mocnenec;
     }
     if (exponent < 0)
          return 1 / vysledok;

     return vysledok;
}
