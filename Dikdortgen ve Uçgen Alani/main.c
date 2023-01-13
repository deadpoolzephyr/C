#include <stdio.h>

int main() {
    char secim;
    int kisaKenar, uzunKenar, alan, taban, yukseklik;

    printf("***Menu***\n");
    printf("Dikdortgen icin d ya da D\n");
    printf("Ucgen icin u ya da U\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);
    secim = getchar();

    switch (secim) {
        case 'd':
        case 'D':
            printf("Kisa kenari giriniz:");
            scanf("%d", &kisaKenar);
            printf("Uzun kenari giriniz:");
            scanf("%d", &uzunKenar);
            alan = kisaKenar * uzunKenar;
            printf("Dikdortgenin alaný = %d\n", alan);
            break;
        case 'u':
        case 'U':
            printf("Taban uzunlugu giriniz:");
            scanf("%d", &taban);
            printf("Taban uzunlugu ait yuksekligi giriniz:");
            scanf("%d", &yukseklik);
            alan = taban * yukseklik / 2;
            printf("Ucgenin alaný = %d\n", alan);
            break;
        default: printf("Hatalý Secim\n");

    }

    return 0;
}
