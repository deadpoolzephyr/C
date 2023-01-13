#include <stdio.h>
#include <stdlib.h>

void yazdir(int);
int secim(int);
int kontrol(char, int);
char sira(int);
char a[3][4]={{'4', '.', '.', '.'},{'5', '.', '.', '.'},{'6', '.', '.', '.'}};

int main()
{
    int s=1, sir=1;

    while(s < 5)
    {
        yazdir(sir);
        s = secim(sir);
        sir++;
    }

    return 0;
}

void yazdir(int si)
{
    int i=0, j=0;

    printf("----------------------------\n");

    if((si % 2) == 0)
        printf("\tSira : X\n");
    else
        printf("\tSira : O\n");

    printf("  1 2 3 \n");
    for(i=0; i < 3; i++)
    {
        for(j=0; j < 4; j++)
        {
            printf("%c", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}

int secim(int si)
{
    char ss;
    int k, kont=0;

    ss = sira(si);

    do{
        printf("Kordinati girin : ");
        scanf("%d", &k);

        kont = 4;
        if((k == 14 || k == 41) && a[0][1] == '.')
            a[0][1] = ss;
        else if((k == 24 || k == 42) && a[0][2] == '.')
            a[0][2] = ss;
        else if((k == 34 || k == 43) && a[0][3] == '.')
            a[0][3] = ss;
        else if((k == 15 || k == 51) && a[1][1] == '.')
            a[1][1] = ss;
        else if((k == 25 || k == 52) && a[1][2] == '.')
            a[1][2] = ss;
        else if((k == 35 || k == 53) && a[1][3] == '.')
            a[1][3] = ss;
        else if((k == 16 || k == 61) && a[2][1] == '.')
            a[2][1] = ss;
        else if((k == 26 || k == 62) && a[2][2] == '.')
            a[2][2] = ss;
        else if((k == 36 || k == 63) && a[2][3] == '.')
            a[2][3] = ss;
        else
        {
            printf("Gecerli Bir Kordinat Girin.\n");
            kont=1;
        }
    }while(kont < 2);

    return kontrol(ss, si);
}

int kontrol(char sss, int sip)
{
    sip++;
    if( (a[0][1] == sss && a[0][2] == sss && a[0][3] == sss) ||
        (a[1][1] == sss && a[1][2] == sss && a[1][3] == sss) ||
        (a[2][1] == sss && a[2][2] == sss && a[2][3] == sss) ||
        (a[0][1] == sss && a[1][1] == sss && a[2][1] == sss) ||
        (a[0][2] == sss && a[1][2] == sss && a[2][2] == sss) ||
        (a[0][3] == sss && a[1][3] == sss && a[2][3] == sss) ||
        (a[0][1] == sss && a[1][2] == sss && a[2][3] == sss) ||
        (a[0][3] == sss && a[1][2] == sss && a[2][1] == sss))
    {
        printf("\n\n\t\tKAZANAN %c", sss);
        return 10;
    }
    else if(sip > 9)
    {
        printf("\n\n\t\tBERABERE!!");
        return 10;
    }
    return 1;
}

char sira(int s)
{
    if((s%2) == 0)
        return 'X';
    else
        return 'O';
}

