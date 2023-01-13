#include <stdio.h>
#include <stdlib.h>

/*
int main() {
char s1[20] = "deneme2";
printf("%s\n", s1);
return 0;
}
*/

/*
int main(){
    const char *s2 = "deneme3";
    printf("%s\n", s2);
return 0;
}
*/

/*
int main() {
char s3[] = "deneme4";
printf("%s\n", s3);
return 0;
}
*/

/*
int main() {
char kelime[20];
printf("bir kelime girin: ");
scanf("%s", kelime);
int i;
// tamamini karakter karakter yazdirirsak, girilmemis kisim rastgele olur
for (i = 0 ; i < 20 ; i++)
printf("%c", kelime[i]);
printf("\n\n");
return 0;
}
*/

/*
//Sonlandýrma Karakteri
int main() {
char kelime[20];
printf("bir kelime girin: ");
scanf("%s", kelime);
int i;
// stringin bittigini anlamak icin '\0' karakteri kullaniliyor
// printf %s asagidaki dongu gibi calisiyor
for (i = 0 ; kelime[i] != '\0' ; i++)
printf("%c", kelime[i]);
printf("\n\n");
return 0;
}
*/

/*
int main() {
char kelime[20];
int karakter_sayisi;
int i;
printf("bir kelime girin: ");
// NOT: birden fazla kelime girilirse ilkini okur. bosluk, tab ve enter
 //kelime sonunu belirler
scanf("%s", kelime);
printf("girilen kelime: %s\n", kelime);
return 0;
}
*/


/*
// karakter sayisini sayma islemi
karakter_sayisi = 0;
while (kelime[karakter_sayisi] != '\0')
karakter_sayisi++;
printf("karakter sayisi: %d\n", karakter_sayisi);
// karakter sayisini sayma islemi
for (karakter_sayisi = 0 ; kelime[karakter_sayisi] != '\0' ; karakter_sayisi++) {
// bos dongu. sadece harf sayisini arttiriyor
}
printf("karakter sayisi: %d\n", karakter_sayisi);


// tersten yazdirma
printf("tersten yazilisi: ");
for (i = karakter_sayisi-1 ; i >= 0; i--)
printf("%c", kelime[i]);
printf("\n");

*/

