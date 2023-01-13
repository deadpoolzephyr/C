#include <stdio.h>
#include <stdlib.h>

int paraustuayristir(int para, int urun){
    int i=0,j=0;
        int para_ustu=para-urun;
            while(para_ustu>=200){
            i++;
            para_ustu = para_ustu-200;
            }
            printf("%d adet 200 TL \n",i);
            i=0;
            while(para_ustu>=100){
            i++;
            para_ustu = para_ustu-100;
            }
            printf("%d adet 100 TL \n",i);
            i=0;
            while(para_ustu>=50){
            i++;
            para_ustu = para_ustu-50;
            }
            printf("%d adet 50 TL \n",i);
            i=0;
            while(para_ustu>=20){
            i++;
            para_ustu = para_ustu-20;
            }
            printf("%d adet 20 TL \n",i);
            i=0;
            while(para_ustu>=10){
            i++;
            para_ustu = para_ustu-10;
            }
            printf("%d adet 10 TL \n",i);
            i=0;
            while(para_ustu>=5){
            i++;
            para_ustu = para_ustu-5;
            }
            printf("%d adet 5 TL \n",i);
            i=0;
            while(para_ustu>=1){
            i++;
            para_ustu = para_ustu-1;
            }
            printf("%d adet 1 TL \n",i);
            i=0;
}
int main()
{
    int urun,para,para_ustu;
    printf("Urunun fiyatini giriniz: \n");
    scanf("%d",&urun);
    printf("Verilen para miktarini giriniz: \n");
    scanf("%d",&para);
    para_ustu = para-urun;
    printf("Verilecek para ustu ==> %d \n",para_ustu);
    paraustuayristir(para,urun);
    return 0;
}

