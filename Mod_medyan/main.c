#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define     SIZE    100

int main()
{
    int a[SIZE];
    int mod = 0;
    int modval;
    int k, i, counter;

    srand(time(0));
    for (k = 0; k < SIZE; ++k) {
        a[k] = rand() % 50;
        printf("%d ", a[k]);
    }

   modval = a[0];

    printf("\n");

    for (i = 0; i < SIZE; ++i) {
        counter = 0;
        for (k = 0; k < SIZE; ++k)
            if (a[k] == a[i])
                counter++;
        if (counter > mod) {
            mod = counter;
            modval = a[i];
        }
    }

    printf("mod = %d\nfrequency = %d\n", modval, mod);


    return 0;
}
/*

int main(){

    int i,j;
    int sayilar[10]={2,5,1,2,7,13,15,9,4,8};
    int tasiyici, uz;
    float medyan;
    float deger1, deger2;
        for(uz=0;uz<10;uz++)
        {
        uz=uz+1;
        }

      for (i=0;i<10;i++)
          {
              for (j=i+1;j<11;j++)
              {

                      if(sayilar[i]>sayilar[j])
                      {
                           tasiyici=sayilar[i];
                           sayilar[i]=sayilar[j];
                           sayilar[j]=tasiyici;
                      }

              }
          }
         */


         /* for (j=0;sayilar[j];j++)
          {
               printf("%d",sayilar[j]);
               printf("\n");
           }
          */


          /*
        if ((uz%2)==0)
        {
            deger1=uz/2;
            deger2=deger1+1;
            printf("Medyan %f",(deger1+deger2)/2);
        }
        else if ((uz%2)==0)
        {
            deger1=uz/2;
            printf("Medyan %f",deger1);
        }

      getch(); //system(“pause”);
}
*/
