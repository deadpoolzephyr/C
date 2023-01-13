#include <stdio.h>
#include <stdlib.h>

/*
#define N 10

int main()
{
    int i;
    float x[N], ort, toplam = 0.0;
    for(i=0; i<N; i++)
        // i. eleman okunuyor ...
    {
        printf("%d. sayi : ",i+1);
        scanf("%f",&x[i]);
        toplam += x[i];
    }
    ort = toplam/N;
    printf("Sayilarin ortalamasi = %f\n",ort);
return 0;
}

*/
/*

int main(void)
{
    int a[10] = {100, -250, 400, 125,550, 900, 689, 450, 347, 700};
    int k, eb; // ilk eleman en büyük kabul ediliyor
    eb = a[0];
    for(k=1; k<10; k++)
        if( a[k]>eb ) eb = a[k];
    printf("En buyuk eleman = %d\n",eb);
return 0;
}

*/

/*
#define n 10

int main(void)
{
    int a[n] = {100, -250, 400, 125,550, 900, 689, 450, 347, 700};
    int i, j, k, eb; // Dizinin kendisi
    printf("Once : ");
    for(k=0; k<n; k++)
        printf("%5d ",a[k]); // Sýrala
    for(k=0; k<n; k++)
    {
        eb = a[k];
        i = k;
        for(j=k+1; j<n; j++)
            if( a[j]>eb )
            {
                eb = a[j];
                i = j;
            }
        a[i] = a[k];
        a[k] = eb;
    } // Sýralama bitti
    printf("\nSonra: ");
    for(k=0; k<n; k++)
    printf("%5d ",a[k]);
    printf("\n");
    return 0;
}
*/

