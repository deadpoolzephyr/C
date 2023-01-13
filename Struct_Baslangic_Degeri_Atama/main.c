#include <stdio.h>
#include <stdlib.h>

/*

struct Zaman {
int saat;
int dakika;
int saniye;
};
int main()
{
/// Zaman tipinde degisken tanimlama
/// baslangic degeri atama
struct Zaman z = { 14, 43, 3 };
/// degerlerin kullanimi
printf("z1.saat : %d\n", z.saat);
printf("z1.dakika : %d\n", z.dakika);
printf("z1.saniye : %d\n", z.saniye);
printf("\n");
return 0;
}

*/

/*

struct Zaman {
int saat;
int dakika;
int saniye;
};
int main(){
/// degelerin tamamini atamadan tanimlanması
struct Zaman z2 = { 15 };
printf("z2.saat : %d\n", z2.saat);
printf("z2.dakika : %d\n", z2.dakika);
printf("z2.saniye : %d\n", z2.saniye);
printf("\n");
return 0;
}

*/




struct Zaman {
int saat;
int dakika;
int saniye;
};
int main(){
/// deger atamasi yapmadan tanimlanması
struct Zaman z3;
printf("z3.saat : %d\n", z3.saat);
printf("z3.dakika : %d\n", z3.dakika);
printf("z3.saniye : %d\n", z3.saniye);
printf("\n");
return 0;
}
