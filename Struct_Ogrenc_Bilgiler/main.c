#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

struct Ogrenci { // Ogrenci : ad soyad ogrNo kayitYili TCKimlik
char ad[30];
char soyad[30];
int ogrenciNo;
int kayitYili;
char TCKimlik[12];
};
int main(){
struct Ogrenci liste[100];
strcpy(liste[0].ad, "deneme"); // ilk ogrencinin adina "deneme" ata
liste[0].kayitYili = 2015; // ilk ogrencinin kayit yilina 2015 ata
liste[0].ogrenciNo = 123; // ilk ogrencinin numarasina 123 ata
printf("%s %d\n", liste[0].ad, liste[0].ogrenciNo); // ilk ogrencinin adini ve numarasini yaz
return 0;
}
