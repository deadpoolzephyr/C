/* 10prg04.c: gösterici dizi iliþkisi */

#include <stdio.h>
#include <stdlib.h>

double ortalama(double dizi[], int n);
int main()
{
double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double o;
o = ortalama(a,5);
printf("Dizinin ortalamasi = %.2f\n",o);
return 0;
}
double ortalama(double dizi[], int n)
{
double *p, t=0.0;
for(p=dizi; p < &dizi[n]; p++)
t += *p;
return (t/n);
}
