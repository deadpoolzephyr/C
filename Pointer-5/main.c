#include <stdio.h>
#include <stdlib.h>

char a = 'T';
char b = 'E';
char c = 'S';
char d = 'T';

int main()
{
    printf("a nin adresi: %d \n", &a);
    printf("b nin adresi: %d \n", &b);
    printf("c nin adresi: %d \n", &c);
    printf("d nin adresi: %d \n", &d);
    printf("a nin degeri: %d\n", a);

    char *p;
    p = &a;
    printf("p nin degeri : %d\n", p);
    printf("*p nin degeri: %d\n\n", *p);
    *p = 'B'; // ascii kodu 66
    printf("a nin degeri: %d\n", a);
    printf("*p nin degeri: %d\n", *p);

    return 0;
}
