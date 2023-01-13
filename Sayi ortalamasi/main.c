#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, N;
    float x[N], ort, toplam = 0.0;
    printf("Sayi adedini giriniz: ");
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        printf("%d. sayi : ",i+1);
        scanf("%f",&x[i]);

        toplam += x[i];
    }

    ort = toplam/N ;

    printf("Sayilarin ortalamasi = %f\n",ort);

return 0;
}
