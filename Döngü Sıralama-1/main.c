#include <stdio.h>

/*

int main()
{
int d[10] = {6,7,3,1,8,4,5,9,10,2};
int i,j, en_kucuk_sira;
for (i = 0 ; i <= 9 ; i++)
    printf("%d ", d[i]);
    printf("\n\n");
    for ( i = 0 ; i <= 8 ; i++)
    {
    en_kucuk_sira = i;
        for (j = i+1 ; j <= 9 ; j++)
            if (d[j] < d[en_kucuk_sira])
                en_kucuk_sira = j;
        int tmp = d[i];
    d[i] = d[en_kucuk_sira] ;
    d[en_kucuk_sira] = tmp;
    printf("i = %d => ", i);
    for (j = 0 ; j <= 9 ; j++)
        printf("%d ", d[j]);
    printf("\n");
}
return 0;
}

*/

/*

//Selection Sort

int main()
{
    long ogr_no[1000] = { 150004, 150002, 150001, 150005, 150003 };
    int vize[1000] = {77, 65, 99, 89, 77};
    int N = 5; // ogrenci sayisi
    int i, j;
    for (i = 0 ; i < N ; i++)
        printf("%ld - %d\n", ogr_no[i], vize[i]);
// Ogrenci numarasina gore siralama
    for (j = 0 ; j < N-1 ; j++)
    {
        int en_kucuk_sira = j;
        for (i = j+1 ; i < N ; i++)
            if (ogr_no[i] < ogr_no[en_kucuk_sira])
                en_kucuk_sira = i;
// ogrenci numaralari dizinde yer degistir
        int tmp = ogr_no[j];
        ogr_no[j] = ogr_no[en_kucuk_sira];
        ogr_no[en_kucuk_sira] = tmp;
// vize dizisinde yer degistir
        tmp = vize[j];
        vize[j] = vize[en_kucuk_sira];
        vize[en_kucuk_sira] = tmp;
    }
    printf("ogrenci numarasina gore siralanmis:\n");
    for (i = 0 ; i < N ; i++)
        printf("%ld - %d\n", ogr_no[i], vize[i]);
    return 0;
}

*/

/*

int main()
{
    long ogr_no[1000] = { 150004, 150002, 150001, 150005, 150003 };
    int vize[1000] = {77, 65, 99, 89, 77};
    int N = 5; // ogrenci sayisi
    int i, j;
    for (i = 0 ; i < N ; i++)
        printf("%ld - %d\n", ogr_no[i], vize[i]);
// Vizeye gore siralama
    for (j = 0 ; j < N-1 ; j++)
    {
// en buyuk buyuk elemani bulur
        int enb_sira = j;
        for (i = j+1 ; i < N ; i++)
            if (vize[i] > vize[enb_sira])
                enb_sira = i;
// vize dizinde yer degistir
        int tmp = vize[j];
        vize[j] = vize[enb_sira];
        vize[enb_sira] = tmp;
// ogr_no dizisinde yer degistir
        tmp = ogr_no[j];
        ogr_no[j] = ogr_no[enb_sira];
        ogr_no[enb_sira] = tmp;
    }
    printf("vizeye gore siralanmis\n");
    for (i = 0 ; i < N ; i++)
        printf("%ld - %d\n", ogr_no[i], vize[i]);
    return 0;
}

*/

/*

//(Doðrusal) Linear Search

#include <stdio.h>
int main()
{
    int n[10] = {10, 14, 19, 26, 27, 11, 33, 35, 42, 44};
    while (1)
    {
        int i, aranan;
        printf("aramak istediginiz sayiyi giriniz:");
        scanf("%d", &aranan);
        int yer = -1;
        for ( i = 0 ; i < 10 ; i++ )
            if (n[i] == aranan)
                yer = i;
        if (yer == -1)
            printf("dizide yok\n");
        else
            printf("dizide bulundugu yer: %d\n", yer);
    }
    return 0;
}

*/

/*

//(Ýkili) Binary Search

#include <stdio.h>
int binary_search(int dizi[], int uzunluk,int aranan)
{
    int alt=0;
    int ust=uzunluk-1;
    int orta=0;
    while(alt<=ust)
    {
        orta=(alt+ust)/2;
        if(dizi[orta]==aranan)
        {
            return orta;
        }
        if(dizi[orta]>aranan)
        {
            ust=orta-1;
        }
        else
        {
            alt=orta+1;
        }
    }
    return 0;
}
int main()
{
    int aranan = 33;
    int uzunluk= 10;
    int dizi[ ]= {10,14,19,26,27,31,33,35,42,44};
    int aranan_indis = binary_search(dizi,uzunluk,aranan);
    if(aranan_indis)
    {
        printf("\n\n %d sayisi: %d indisinde bulundu \n\n",aranan,aranan_indis);
    }
    else
    {
        printf("\n\n %d sayisi dizide bulunamadi\n\n",aranan);
    }
    return 0;
}

*/

/*
//(Kabarcýk Sýralama)Bubble Sort

#include <stdio.h>
void bubble_sort(int d[], int uzunluk)
{
    int pass, mov, tmp;
    for ( pass=1 ; pass < uzunluk ; i++ )
        for (mov=0 ; mov < uzunluk-1 ; mov++)
            if ( d[mov] > d[mov+1] )
            {
                tmp = d[mov];
                d[mov] = d[mov+1];
                d[mov+1] = tmp;
            }
}
int ikili_ara(int dizi[], int uzunluk, int aranan)
{
    int alt = 0;
    int ust = uzunluk-1;
    int orta;
    while (alt <= ust)
    {
        orta = (alt + ust) / 2;
        if (dizi[orta] == aranan) return orta;
        else if (dizi[orta] > aranan) ust = orta - 1;
        else alt = orta + 1;
    }
    return -1;
}
void main()
{
    int d[10] = {5, 8, 1, 3, 25, 11, 17, 2, 7, 9};
    int i, aranan;
    bubble_sort(d, 10);
    printf("sirali hali:\n");
    for (i = 0 ; i < 10 ; i++)
        printf("%d ", d[i]);
    printf("\n");
    while (1)
    {
        printf("aranacak elemani giriniz:");
        scanf("%d", &aranan);
        int yer = ikili_ara(d, 10, aranan);
        if (yer == -1) printf("%d dizide yok\n", aranan);
        else printf("%d'nin yeri: %d\n", aranan, yer);
    }
}

*/
