#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int topla(int, ...);

int main()
{
    printf("topla(2, 11, 22)                       = %d\n",topla(2, 11, 22));
    printf("topla(3, 11, 22, 33)                   = %d\n",topla(3, 11, 22, 33));
    printf("topla(4, 11, 22, 33, 44)               = %d\n",topla(4, 11, 22, 33, 44));
    printf("topla(5, 11, 22, 33, 44, 55)           = %d\n",topla(5, 11, 22, 33, 44, 55));
    printf("topla(6, 11, 22, 33, 44, 55, 66)       = %d\n",topla(6, 11, 22, 33, 44, 55, 66));

    return 0;
}

int topla(int n, ...)
{
    va_list ap;
    int i, top = 0;

    va_start(ap, n);

    for (i=1; i<=n; i++)
        top += va_arg(ap, int);

    va_end(ap);
    return top;
}
