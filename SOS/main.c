#include <stdio.h>
#include <stdlib.h>

#define N 8
//  8x8 T matrisi global degisken olarak tanimlandi
char T[N][N];
// fonksiyon prototipleri
void ciz();
void oyuncudan_giris_iste();
int main() {
	int i, j;
	for (i = 0 ; i < N ; i++) {
		for (j = 0 ; j < N ; j++) {
			T[i][j] = '.';
		}
	}
	while (1) {
		ciz();
		oyuncudan_giris_iste();
		// burada oyununun bitip bitmedigi kontrol edilebilir
	}
	return 0;
}

 //oyuncudan yapacagi hamlenin koordinatini ve secimi ister

void oyuncudan_giris_iste() {
	int x, y;
	while (1) {
		printf("(x y): ");
		scanf("%d %d", &x, &y);

		if (x < 0 || x >= N || y < 0 || y >= N) {
			// 0'dan kucuk ya da N'e buyuk esit bir yer girilirse hata ver
			printf("yanlis giris!!! ");
		} else if (T[x][y] != '.') {
			printf("dolu!!! ");
		} else {
			// dogru giris yapildi
			break; // donguyu durdur
		}
	}
	printf("S / O ? ");
	char c;
	scanf(" %c", &c);
	// FIXME: kullanici baska harf girebilir. giris kontrol edilmeli
	T[x][y] = c;
}

void ciz() {
	int i, j;

	// ekrani temizleme komutu:
	// system("clear"); // GNU/Linux
	// system("cls"); // Windows

	printf("\n   ");
	for (i = 0 ; i < N ; i++)
		printf("%d ", i);
	printf("\n");

	for (i = 0 ; i < N ; i++) {
		printf("%d  ", i);
		for (j = 0 ; j < N ; j++) {
			printf("%c ", T[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


