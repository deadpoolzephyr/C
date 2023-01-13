#include <stdio.h>

int main() {

    int sayi1, sayi2, topSonuc, cikSonuc, bolSonuc, carpSonuc;
    char islemSec;

    printf("Bir islem seciniz:\n");
    printf("\tToplama islemi icin '+'\n"); // '\n' bir alt satira geçmeyi saðlýyor
    printf("\tCikarma islemi icin '-'\n"); // '\t' boþluk býrakma (Yatay TAB)
    printf("\tCarpma islemi icin '*'\n");
    printf("\tBolme islemi icin '/'\n");
    printf("\tTum islemleri gostermek icin '!'\n");
    printf("Girilecek islemi seciniz: ");
    scanf("%c", &islemSec);

    printf("Birinci Sayiyiyi Giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    switch (islemSec) {

        case '+':
            topSonuc = sayi1 + sayi2;
            printf("%f+%f = %f", sayi1, sayi2, topSonuc);
            break;

        case '-':
            cikSonuc = sayi1 - sayi2;
            printf("%f-%f = %f", sayi1, sayi2, cikSonuc);
            break;

        case '*':
            carpSonuc = sayi1 * sayi2;
            printf("%f*%f = %f", sayi1, sayi2, carpSonuc);
            break;

        case '/':
            bolSonuc = sayi1 / sayi2;
            printf("%f/%f = %f", sayi1, sayi2, bolSonuc);
            break;

        case '!':
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
