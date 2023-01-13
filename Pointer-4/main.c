/* 10prg06.c: iki sayının birbiri ile takas edilmesi */

#include <stdio.h>
#include <stdlib.h>

void takas(int *, int *);
int main()
{
int a, b;
a=22; b=33;
printf("takas oncesi : a=%d b=%d\n",a,b);
takas(&a, &b);
printf("takas sonrasi: a=%d b=%d\n",a,b);
return 0;
}
void takas(int *x, int *y)
{
int z;
z = *x;
*x = *y;
*y = z;
}
