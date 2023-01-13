#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&x);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&y);
    if(x%2!=0 && y%2!=0)a=x+y;
    else if (x%2!=0 && y%2==0) a=x-y ;
    else if (x%2==0 && y%2!=0) a=y-x ;
    else if(x%2==0 && y%2==0) a=x+y ;
    printf("Sonuc = " "%d",a);

    return 0;
}
