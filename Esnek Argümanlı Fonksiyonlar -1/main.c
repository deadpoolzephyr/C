#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

double p(double, int, ...);


int main()
{
    double x = 1.7 ;

    printf("x = %lf icin:\n",x);
    printf("p(x, 1, 1.0) = %lf\n",p(x, 1, 1.0));
    printf("p(x, 2, 1.0, -2.0) = %lf\n",p(x, 2, 1.0, -2.0));
    printf("p(x, 3, 1.0, -2.0, 0.2) = %lf\n",p(x, 3, 1.0, -2.0, 0.2));
    printf("p(x, 4, 1.0, -2.0, 0.2, 1.1) = %lf\n",p(x, 4, 1.0, -2.0, 0.2, 1.1));
    printf("p(x, 5, 1.0, -2.0, 0.2, 1.1, -0.6) = %lf\n",p(x, 5, 1.0, -2.0, 0.2, 1.1, -0.6));

    return 0;
}


double p(double x, int n, ...)
{
    double a, t = 0.0;
    int i;

    va_list ag;

    va_start(ag, n);

    for(i=0; i<n; i++)
    {
        a = va_arg(ag, double);

        t += a*pow(x,i);
    }

    va_end(ag);

    return t;
}
