#include <stdio.h>
#include <stdlib.h>

int buyukToplamiBul(int dizi[],int a)
{
    int i, cifttoplami=0, tektoplami=0;
    printf("Cift Sayilar : ");
    for (i=0; i<a; i++)
    {
        if(dizi[i]%2==0)
        {
            printf("%d ",dizi[i]);
            cifttoplami=cifttoplami+dizi[i];
        }
    }
    printf("\nCift Sayilar Toplami ; %d \n",cifttoplami);

    printf("Tek Sayilar : ");
    for (i=0; i<a; i++)
    {
        if(dizi[i]%2==1)
        {
            printf("%d ",dizi[i]);
            tektoplami=tektoplami+dizi[i];
        }
    }
    printf("\nTek Sayilar Toplami : %d \n",tektoplami);


    if(cifttoplami>tektoplami)
    {
        return 1;
    }
    else if(tektoplami>cifttoplami)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int n;
    printf("Dizi boyutunu giriniz\n");
    scanf("%d",&n);
    int i,x[n];
    for(i=0;i<n;i++){
        printf("%d inci elemani giriniz\n",i+1);
        scanf("%d",&x[i]);
    }

    int sonuc = buyukToplamiBul(x,n);
        if(sonuc=1) {printf("Cift sayilar toplami buyuk");
            }else if(sonuc=2){printf("Tek sayilar toplami buyuk");
                } else {printf("Cift ve tek sayi toplami esit");

            }
return 0;
}
