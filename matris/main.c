#include <stdio.h>
#include <stdlib.h>

/*

int main() {
// baslangic degeri atayarak tanimlama
	int matris[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
// baslangic degeri atamadan tanimlama
// int matris[3][3];
	int satir, sutun;
	for (satir = 0 ; satir < 3 ; satir++) {
		for (sutun = 0 ; sutun < 3 ; sutun++)
			printf("%d ", matris[satir][sutun]);
		printf("\n");
	}
	printf("\n");
	// matristeki elemana deger atama
	matris[1][2] = 999;
	// matristeki elemanin degerini yazma
	printf("0,2 -> %d\n\n", matris[0][2]);
	printf("2,0. elemana sayi girin:");
	// matristeki elemanin degerini klavyeden okuma
	scanf("%d", &matris[2][0]);
	printf("2,0 -> %d\n\n", matris[2][0]);
	for (satir = 0 ; satir < 3 ; satir++) {
		for (sutun = 0 ; sutun < 3 ; sutun++)
			printf("%d ", matris[satir][sutun]);
		printf("\n");
	}
	return 0;
}

*/


int main() {
    int matris[3][3];
    int transpose[3][3];
    int satir = 0,sutun = 0;
    printf("\n3*3'luk matrisin degerlerini giriniz \n\n");
    for( satir = 0 ;  satir < 3; satir++ ) {
        for ( sutun = 0; sutun< 3; sutun++) {
            printf("Matrisin [%d][%d] elemani : ",satir+1,sutun+1);
            scanf("%d",&matris[satir][sutun]);
            transpose[sutun][satir] = matris[satir][sutun];
        }
    }
    printf("\nMatris\tve\tTranspozu\n");
    for( satir= 0 ;  satir < 3; satir++ ) {
        for ( sutun = 0; sutun< 3; sutun++) {
            printf("%d ",matris[satir][sutun]);
        }
        printf("\t\t"); // 2 tab boyutu bosluk birakir
        for ( sutun = 0; sutun< 3; sutun++) {
            printf("%d ",transpose[satir][sutun]);
        }
        printf("\n");
    }
    return 0;
}
