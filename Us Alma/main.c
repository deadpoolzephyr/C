/*
#include <stdio.h>

//For iþlemi ile üs alma

int main() {

    int sayi, us, i, sonuc = 1; //Çarpma iþleminde etkisiz eleman 1 olduðu için sonuc=1 olarak atamak þart!!

    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    printf("Alinacak us degerini giriniz: ");
    scanf("%d", &us);

    for (i = 0; i < us; i++)
        sonuc = sonuc * sayi; //Bu iþlemin kýsasý sonuc *= sayi;

    printf("Sonuc= %d\n", sonuc);

    return 0;
}

*/

#include <stdio.h>

//For iþlemi ile üs alma (Üs negatif girilirse eðer!!!)

int main() {

    int sayi, us, i, sonuc = 1, degisti = 0; //Çarpma iþleminde etkisiz eleman 1 olduðu için sonuc=1 olarak atamak þart!!
    float rasyonelSonuc;

    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    printf("Alinacak ust degerini giriniz: ");
    scanf("%d", &us);

    //Ust negatif ise döngüye giremeyeceði için üstü pozitif yapyoruz
    //if koþuluna girdiðini anlamak içine degisti=1 yapýyoruz
    if (us < 0) {
        us = -1 * us;
        degisti = 1; //Üst deðeri pozitif girildi ise 0 kalýr negatif girildi ise degisti=1 olur
    }

    for (i = 0; i < us; i++)
        sonuc *= sayi;

    //Üst deðeri negatif ise Sonuç 1/sonuc þeklinde yazýlýr yani noktalý bir ifade olmasý lazým
    if (degisti == 1) {
        rasyonelSonuc = 1.0 / sonuc;
        printf("%.4f", rasyonelSonuc); //Float %f þeklinde gösterilir. Noktadan sonra 4 basamak gözükmesi için %.4f þeklinde yazýlýr
    }        // Üst deðeri 0 ya da pozitif ise deðiþiklik yapmadan yazdýr
    else
        printf("Sonuc= %d", sonuc);

    return 0;
}
