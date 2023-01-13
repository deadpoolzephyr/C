#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int say(char *cumle)
{
    int i, j, sayac;
    int son=strlen(cumle);
    for(i=0;i<=son;i++)
    {
        sayac=1;
        for(j=i+1;j<=son;j++)
        {
            if(cumle[i]==cumle[j]) {sayac++; cumle[j]='\0' ;}
        }
    if(cumle[i]!='\0') printf("%c %d \n",cumle[i],sayac);
    }
    return 0;
}
int main()
{
    char cumle[1000];
    printf("Bir cumle giriniz:\nGirilen cumle:");
    gets(cumle);
    puts(cumle);
    say(cumle);
    return 0;
}
