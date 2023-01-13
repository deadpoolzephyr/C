#include <stdio.h>
#include <stdlib.h>

#define n 10
int main(void)
{
    int a[n] = {100, -250, 400, 125,550, 900, 689, 450, 347, 700};
    int j,k,gecici;
    printf("Once : ");
    for(k=0; k<n; k++)
        printf("%5d ",a[k]);

    for(k=0; k<n-1; k++)
        for(j=0; j<n-1; j++)
            if( a[j]<a[j+1] )
            {
                gecici = a[j];
                a[j] = a[j+1];
                a[j+1] = gecici;
            }

    printf("\nSonra: ");

    for(k=0; k<n; k++)
        printf("%5d ",a[k]);
    printf("\n");
    return 0;
}
