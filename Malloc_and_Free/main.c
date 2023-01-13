#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p_dizi;
    p_dizi = malloc(5 * sizeof(char));
    strcpy(p_dizi, "test");
    printf("%s\n\n", p_dizi);
    p_dizi = realloc(p_dizi, 100 * sizeof(char));
    strcat(p_dizi, " 123456789123456789");
    printf("%s\n", p_dizi);
    printf("stringin boyutu: %d\n", strlen(p_dizi));
    printf("bellegin boyutu: 100\n\n");
    int karakter_sayisi = strlen(p_dizi)+1; // +1 sonlandirma karakteri
    p_dizi = realloc(p_dizi, karakter_sayisi * sizeof(char) );
    printf("%s\n", p_dizi);
    printf("stringin boyutu: %d\n", strlen(p_dizi));
    printf("bellegin boyutu: %d\n", strlen(p_dizi)+1);
    free(p_dizi);
    return 0;
}
