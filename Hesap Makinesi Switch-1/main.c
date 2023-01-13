#include <stdio.h>
#include <stdlib.h>

int main()
{
    char islem;
    float a,b;
    printf("Yapilacak islemi giriniz(+,-,*,/): ");
    scanf("%c", &islem);
    printf("Iki sayi giriniz: ");
    scanf("%f %f", &a , &b);
    switch(islem)
    {
        case'+':
            printf("%f + %f = %.2f", a , b , a+b );
            break;
        case'-':
            printf("%f - %f = %.2f", a , b , a-b );
            break;
        case'*':
            printf("%f * %f = %.2f", a , b , a*b );
            break;
        case'/':
            printf("%f / %f = %.2f", a , b , a/b );
            break;


        default:
            printf("Hata! Yanlis secim.");
    }

    return 0;
}
