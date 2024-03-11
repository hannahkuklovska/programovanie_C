#include <stdio.h>

double mta_odmocnina(int m, double x);
double mocnina(double mocnenec, double exponent);

int main(void)
{
     int m, x;

     printf("Zadajte cislo: ");
     scanf("%d", &x);

     printf("Zadajte odmocninu (m): ");
     scanf("%d", &m);

     if (m < 0)
     {
          printf("Chyba: Odmocnina zo zaporneho cisla.\n");
          return -1;
     }

     printf("%dha odmocnina z %d je: %lf\n", m, x, mocnina(m, 1.0 / x));

     return 0;
}

double mta_odmocnina(int m, double x)
{
     if (m == 0)
     {
          printf("Chyba: Vypocet nultej odmocniny.\n");
          return -1;
     }

     if (x < 0 && m % 2 == 0)
     {
          printf("Chyba: Vypocet parnej odmocniny zo zaporneho cisla.\n");
          return -1;
     }

     double vysledok = mocnina(x, 1.0 / m);
     return vysledok;
}

double mocnina(double mocnenec, double exponent)
{
     if (exponent == 0)
     {
          return -1;
     }

     if (mocnenec == 0)
          return 0;

     double vysledok = 1.0;

     for (int i = 0; i < exponent; i++)
     {
          vysledok *= mocnenec;
     }

     return vysledok;
}
