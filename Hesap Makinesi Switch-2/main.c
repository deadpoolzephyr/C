#include <stdio.h>

int main() {

    float sayi1, sayi2, topSonuc, cikSonuc, bolSonuc, carpSonuc;
    int islemSec;

    printf("Birinci Sayiyiyi Giriniz: ");
    scanf("%f", &sayi1);

    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%f", &sayi2);

    printf("Bir islem seciniz:\n");
    printf("\tToplama islemi icin '1'\n"); // '\n' bir alt satira geçmeyi saðlýyor
    printf("\tCikarma islemi icin '2'\n"); // '\t' boþluk býrakma (Yatay TAB)
    printf("\tCarpma islemi icin '3'\n");
    printf("\tBolme islemi icin '4'\n");
    printf("\tTum islemleri gostermek icin '5'\n");
    printf("Girilecek islemi seciniz: ");
    scanf("%d", &islemSec);

    switch (islemSec) {

        case 1:
            topSonuc = sayi1 + sayi2;
            printf("%f+%f = %f", sayi1, sayi2, topSonuc);
            break;

        case 2:
            cikSonuc = sayi1 - sayi2;
            printf("%f-%f = %f", sayi1, sayi2, cikSonuc);
            break;

        case 3:
            carpSonuc = sayi1 * sayi2;
            printf("%f*%f = %f", sayi1, sayi2, carpSonuc);
            break;

        case 4:
            bolSonuc = sayi1 / sayi2;
            printf("%f/%f = %f", sayi1, sayi2, bolSonuc);
            break;

        case 5:
            topSonuc = sayi1 + sayi2;
            cikSonuc = sayi1 - sayi2;
            bolSonuc = sayi1 / sayi2;
            carpSonuc = sayi1 * sayi2;

            printf("\t%f+%f = %f\n", sayi1, sayi2, topSonuc);
            printf("\t%f-%f = %f\n", sayi1, sayi2, cikSonuc);
            printf("\t%f*%f = %f\n", sayi1, sayi2, carpSonuc);
            printf("\t%f/%f = %f\n", sayi1, sayi2, bolSonuc);

            break;

        default:
            printf("Islem basarirsiz. Lutfen 1-4 araliginda bir deger giriniz.");
    }

    return 0;

}
