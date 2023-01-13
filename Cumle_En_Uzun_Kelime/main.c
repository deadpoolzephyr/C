#include <stdio.h>
#include <string.h>

int main()
{
	char cumle[101];
	int len = 0;
	fprintf(stdout, "Cumleyi girin:");
	fgets(cumle, 100, stdin);

	//enter (\n) karakterini ayýkla, son kelimeyi de bulabilmek için boþluk olarak deðiþtir.
	len = strlen(cumle);
	cumle[len -1] = ' ';

	char *begin = cumle;  //aramaya en baþtan baþlayacaðýz.
	char *end = NULL;     //bulduðumuz kelimenin bitiþi, bir sonraki kelimemizin baþlangýcýný bulmakta kullanýlacak

	char *tmp_begin = NULL;
	int tmp_len = 0;

	while((end = strstr(begin, " ")) != NULL)  // boþluk karakteri bulunmayana kadar döngüye devam
	{
		--end; //strstr fonksiyonu end fonksiyonunu boþluða konumlandýrdýr. Bu konumu boþluktan önceki karaktere çekiyoruz
		int cur_len = end - begin; // kelimemizin uzunluðu
		if(cur_len > tmp_len ) // güncel uzunluk, bir önceki uzunluktan büyükse ilgili birimlerde deðiþiklik yapýyoruz
		{
			tmp_begin = begin; // en uzun kelimenin baþlangýç adresi
			tmp_len = cur_len; // en uzun kelimenin uzunluðu
		}
		begin = end+2;  // bir önceki kelimeden bir sonraki karakter boþluk oluyor. O nedenle biz boþluktan da bir sonraya konumlandýrýyoruz. O nedenle +2 yaptýk
	}

	//kelimeyi yazdýr
	int i;
	++tmp_len;
	for(i = 0; i < tmp_len; ++i)
		fprintf(stdout, "%c", tmp_begin[i]);


	return 0;
}
