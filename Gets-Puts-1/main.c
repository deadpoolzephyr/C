#include <stdio.h>
#include <stdlib.h>

/*
int main() {
char s[100];
// gets fonksiyonu ile cumle okunabilir (bosluklar dahil).
// scanf %s ile kelime okunabiliyor. scanf %s bosluklari almiyor.

printf("cumle girin: ");
gets(s);

printf("cumle: ");
puts(s);

return 0;
}
*/

/*
int main() {
int a = 10;
char yazi[8];
int b = 20;

printf("a: %d ve b: %d\n\n", a, b);
printf("programi 8 veya daha fazla karakter girerek test edin\n");
printf("yazi girin: ");
gets(yazi);
// scanf'de de ayni problem var
// scanf("%s", yazi);
printf("girilen kelime: ");
puts(yazi);
printf("\na: %d ve b: %d\n", a, b);

return 0;
}
*/

/*
int main() {
int a = 10;
char s[8]; // 7 karakter + 1 sonlandirma karakteri sigabilir
int b = 20;
printf("a: %d ve b: %d\n\n", a, b);
printf("programi 8 veya daha fazla karakter girerek test edin\n");
printf("kelime girin: ");
fgets(s, 8, stdin); // gets yerine bu sekilde kullanabiliriz
// scanf ile kelime okumak istersek
// scanf("%7s", s);
printf("girilen kelime: ");
puts(s);
printf("\na: %d ve b: %d\n", a, b);
return 0;
}
*/

/*
int main() {
char cumle[100];
printf("bir cumle girin: ");
fgets(cumle, 100, stdin); // gets yerine bu sekilde kullanabiliriz
// gets(cumle);
printf("cumlenin uzunlugu: %d\n", karakter_sayisi(cumle));
int yer = karakter_ara(cumle, 'a');
if (yer == -1)
printf("cumlede a karakteri yok\n");
else
printf("cumlede a karakteri %d. indexte var\n", yer);
return 0;
}

int karakter_sayisi(const char *s) {
int i;
for (i = 0 ; s[i] != '\0' ; i++) {
// islem yapmadan say
}
return i;
}

int karakter_ara(const char *s, char c) {
int i;
for (i = 0 ; s[i] != '\0' ; i++) {
if (s[i] == c)
return i;
}
return -1;
}
*/

/*
//Cümle ekleme
int main() {
char cumle_1[100];
char cumle_2[50];
printf("bir cumle girin: ");
fgets(cumle_1, 50, stdin);
printf("eklenecek cumle girin: ");
fgets(cumle_2, 50, stdin);
// cumle_1'in sonuna cumle_2'yi ekle
string_ekle(cumle_1, cumle_2);
printf("ikinci cumle, birinci cumleye eklendi.\n\n");
puts(cumle_1);
return 0;
}

int karakter_sayisi(const char *s) {
int i;
for (i = 0 ; s[i] != '\0' ; i++) {
// islem yapmadan say
}
return i;
}
// bastaki isimli stringe, sondaki isimli stringi ekler
void string_ekle(char *bastaki, const char *sondaki) {
int bastaki_N = karakter_sayisi(bastaki);
int sondaki_N = karakter_sayisi(sondaki);
int i;
for (i = 0 ; i < sondaki_N ; i++)
bastaki[i+bastaki_N] = sondaki[i];
bastaki[bastaki_N+sondaki_N] = '\0';
}
*/

/*
//Cümle içinde arama
int main() {
char cumle[100];
char aranan[20];
printf("bir cumle girin: ");
fgets(cumle, 100, stdin); // gets yerine bu sekilde kullanabiliriz
// gets(cumle);
printf("aranan kelime: ");
scanf("%20s", aranan);
printf("cumlenin uzunlugu: %d\n", karakter_sayisi(cumle)-1
       );
printf("aranan kelimenin uzunlugu: %d\n", karakter_sayisi(aranan));
int var = string_ara(cumle, aranan);
if (var == 0) {
printf("aranan kelime cumlede yok\n");
} else {
printf("aranan kelime cumlede var\n");
}
return 0;
}

int karakter_sayisi(const char *s) {
int i;
for (i = 0 ; s[i] != '\0' ; i++) {
// islem yapmadan say
}
return i;
}

int string_ara(const char *s, const char * aranan) {
int i, j;
int s_n = karakter_sayisi(s);
int aranan_N = karakter_sayisi(aranan);
for (i = 0 ; i <= s_n-aranan_N ; i++) {
for (j = 0 ; j < aranan_N ; j++) {
if (s[i+j] != aranan[j])
break;
}
// eger j == aranan_N olduysa: j dongusu bitmis ve aranan_N tanesi aynidir
if (j == aranan_N)
return 1; // return var
}
return 0;
}
*/


