#include <stdio.h>
#include <stdlib.h>

int main()
{
    char bilgiler[5][80],ad[5][20],soyad[5][20],numara[5][9];
    int i;
    float not[5];

    printf("Ad Soyad Numara Not Bilgisi Giriniz: \n");

    for(i=0;i<5;i++){
    fgets(bilgiler[i],80,stdin);
    sscanf(bilgiler[i],"%s %s %s %f",ad[i],soyad[i],numara[i],&not[i]);
    }

    printf("Notu 50'den buyuk olan ogrenciler: \n");
    for(i=0;i<5;i++){
                if(not[i]>50){
                    printf("%s %3.2f \n",numara[i],not[i]);
                }
    }

    return 0;
}
