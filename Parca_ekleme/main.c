#include <stdio.h>
#include <stdlib.h>

struct parcalar{
char ad[20];
int adet;
float fiyat;

};

int main()
{
    struct parcalar prc[10];
    int i,a,n=0,toplam=0;
    for(i=0;i<10;i++){
    printf("%d.parca ismini girin \n",i+1);
    scanf("%s",&prc[i].ad);
    printf("%d.parca adedini girin \n",i+1);
    scanf("%d",&prc[i].adet);
    printf("%d.parca fiyatini girin \n",i+1);
    scanf("%f",&prc[i].fiyat);
    printf("Bilgisayar parcasi eklemek ister misiniz? (evet:1) \n");
    scanf("%d",&a);
    if(a!=1){
        break;
    }
    else n++;
}
printf("urun adi:    urun adedi:        birim fiyati: \n");
for(i=0;i<n+1;i++){
    printf("%s       %d                  %.2f",prc[i].ad,prc[i].adet,prc[i].fiyat);
    printf("\n");
    toplam=toplam+(prc[i].fiyat*prc[i].adet);
}
printf("Toplam birim fiyati: %d",toplam);
return 0;
}
