/*
#include <stdio.h>

//For i�lemi ile �s alma

int main() {

    int sayi, us, i, sonuc = 1; //�arpma i�leminde etkisiz eleman 1 oldu�u i�in sonuc=1 olarak atamak �art!!

    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    printf("Alinacak us degerini giriniz: ");
    scanf("%d", &us);

    for (i = 0; i < us; i++)
        sonuc = sonuc * sayi; //Bu i�lemin k�sas� sonuc *= sayi;

    printf("Sonuc= %d\n", sonuc);

    return 0;
}

*/

#include <stdio.h>

//For i�lemi ile �s alma (�s negatif girilirse e�er!!!)

int main() {

    int sayi, us, i, sonuc = 1, degisti = 0; //�arpma i�leminde etkisiz eleman 1 oldu�u i�in sonuc=1 olarak atamak �art!!
    float rasyonelSonuc;

    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    printf("Alinacak ust degerini giriniz: ");
    scanf("%d", &us);

    //Ust negatif ise d�ng�ye giremeyece�i i�in �st� pozitif yapyoruz
    //if ko�uluna girdi�ini anlamak i�ine degisti=1 yap�yoruz
    if (us < 0) {
        us = -1 * us;
        degisti = 1; //�st de�eri pozitif girildi ise 0 kal�r negatif girildi ise degisti=1 olur
    }

    for (i = 0; i < us; i++)
        sonuc *= sayi;

    //�st de�eri negatif ise Sonu� 1/sonuc �eklinde yaz�l�r yani noktal� bir ifade olmas� laz�m
    if (degisti == 1) {
        rasyonelSonuc = 1.0 / sonuc;
        printf("%.4f", rasyonelSonuc); //Float %f �eklinde g�sterilir. Noktadan sonra 4 basamak g�z�kmesi i�in %.4f �eklinde yaz�l�r
    }        // �st de�eri 0 ya da pozitif ise de�i�iklik yapmadan yazd�r
    else
        printf("Sonuc= %d", sonuc);

    return 0;
}
