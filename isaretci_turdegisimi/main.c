#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int dizi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("dizi: ");
    for (i = 0 ; i < 10 ; i++)
        printf("%d ", dizi[i]);
    printf("\n\n");
    char *s = (char*)(dizi);
    strcpy(s, "test");
    printf("s: %s\n\n", s);
    printf("dizi: ");
    for (i = 0 ; i < 10 ; i++)
        printf("%d ", dizi[i]);
    printf("\n\n");
    return 0;
}
