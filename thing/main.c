#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

int main()
{
/*
srand(time(NULL));
    int i = 0;
    int rnd = rand();

    for(i=0;i<rnd;i++){
        printf("%d\n",i);
    }
    return 0;


    srand(time(NULL));
    int i = 0;

    for(i=0;i<10;i++){
        int rnd = rand();
        printf("%d\n",rnd);
    }
return 0;
*/

/*
srand(time(NULL));
    int i = 0;
    int r = rand();

    for(i=0;i<r;i++){
        int rnd = rand();
        printf("%d\n",rnd);
    }
return 0;
*/

/*
        srand(time(NULL));
        int i = 0;
        int r = 1;

        for(i=0;i<r;i++){
            int rnd = rand();
            r = rnd;
            printf("%d\n",rnd);
        }

        return 0;
    */
    /*
        int x = 0, y = 12;
        while(x<y){
            if(x%2==0){
                printf("%d\n",x);
            }
            x++;

        }
return 0;
*/

/*
int i=0;
int dizi[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
        for(i=0;i<13;i++)
        {
            if(dizi[i]%2 == 1){
                printf("%d \n", dizi[i]);
            }
        }
    }
*/

/*
int dizi[] = {12,55,161,52,10,5,72,83,2};
    int i, min, max;

    //printf("%d",dizi[3]);

    min = dizi[0];
    max = dizi[0];

    for(i=0;i<10;i++){
        if(min > dizi[i]){
            min = dizi[i];
        }

        if(max < dizi[i]){
            max = dizi[i];
        }
    }

    printf("Min: %d \n",min);
    printf("Max: %d \n", max);

return 0;
*/

    int dizi[] = {12,71,55,161,-22,52,10,5,72,83,2};
    float sum = 0.0;
    float avg = 0.0;
    int i;
    int eleman_sayisi = (sizeof(dizi) / sizeof(int));

    for(i=0; i<(eleman_sayisi+1); i++)
    {
        sum = sum + dizi[i]; // sum += dizi[i];
        //sum = sum - dizi[i]; sum -= dizi[i];
    }

    avg = sum / eleman_sayisi;

    printf("Elemanlar sayisi: %d\n", eleman_sayisi);
    printf("Elemanlar toplami: %.2f\n", sum);
    printf("Ortalama: %.2f",avg);

return 0;
}
