#include <stdio.h>

int main(){

    float cap, alan, cevre, pi=3.141593, yariCap;

    printf("Cap uzunlugunu giriniz: ");
    scanf("%f", &cap);  // Float t�r� i�in %f giriliyor

    yariCap = cap / 2;

    alan = pi * (yariCap * yariCap);
    cevre = pi * cap;

    printf("Alan= %.2f\nCevre= %.2f", alan, cevre); // Noktadan sonra 2 basamak g�z�kmesi i�in .2 ekliyoruz

    return 0; // Program� sonland�r�r

}
