#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, kac, *sayilar;
    printf("Kac sayi gireceksiniz:");
    scanf("%d",&kac);

    sayilar = (int*)malloc(kac*sizeof(int));

    for(i=0; i<kac; i++)
    {
        printf("%d . sayiyi giriniz :",i+1);
        scanf("%d",&(sayilar[i]));
    }
    for(i=0; i<kac; i++)
    {
        printf("%d . sayi: %d\n",i+1,sayilar[i]);
    }

    return 0;
}
