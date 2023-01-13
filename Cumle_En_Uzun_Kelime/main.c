#include <stdio.h>
#include <string.h>

int main()
{
	char cumle[101];
	int len = 0;
	fprintf(stdout, "Cumleyi girin:");
	fgets(cumle, 100, stdin);

	//enter (\n) karakterini ay�kla, son kelimeyi de bulabilmek i�in bo�luk olarak de�i�tir.
	len = strlen(cumle);
	cumle[len -1] = ' ';

	char *begin = cumle;  //aramaya en ba�tan ba�layaca��z.
	char *end = NULL;     //buldu�umuz kelimenin biti�i, bir sonraki kelimemizin ba�lang�c�n� bulmakta kullan�lacak

	char *tmp_begin = NULL;
	int tmp_len = 0;

	while((end = strstr(begin, " ")) != NULL)  // bo�luk karakteri bulunmayana kadar d�ng�ye devam
	{
		--end; //strstr fonksiyonu end fonksiyonunu bo�lu�a konumland�rd�r. Bu konumu bo�luktan �nceki karaktere �ekiyoruz
		int cur_len = end - begin; // kelimemizin uzunlu�u
		if(cur_len > tmp_len ) // g�ncel uzunluk, bir �nceki uzunluktan b�y�kse ilgili birimlerde de�i�iklik yap�yoruz
		{
			tmp_begin = begin; // en uzun kelimenin ba�lang�� adresi
			tmp_len = cur_len; // en uzun kelimenin uzunlu�u
		}
		begin = end+2;  // bir �nceki kelimeden bir sonraki karakter bo�luk oluyor. O nedenle biz bo�luktan da bir sonraya konumland�r�yoruz. O nedenle +2 yapt�k
	}

	//kelimeyi yazd�r
	int i;
	++tmp_len;
	for(i = 0; i < tmp_len; ++i)
		fprintf(stdout, "%c", tmp_begin[i]);


	return 0;
}
