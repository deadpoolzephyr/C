#include <stdio.h>
#include <stdlib.h>

int main()
{

    char harf, cinsiyet, E, K;

    printf("Merhaba. Oncelikle adinizin bas harfini ogrenebilir miyim? \n");
    scanf("%c", &harf);
    printf("Merhaba %c ,peki cinsiyetini �grenebilir miyim? E/K \n", harf);
    scanf("%c", &cinsiyet);
    if(cinsiyet=='E'){
        printf("Oyleyse yasini benimle paylasmanda bir sakinca yoktur herhalde? \n");
    }else if(cinsiyet=='K'){
        printf("Kad�nlara yasi sorulmaz ama rica etsem kac yasinda oldugunu benimle paylasabilir misin? \n");
    }

    return 0;
}
