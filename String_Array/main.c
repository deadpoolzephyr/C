#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    char iller[3][10] = {"Ankara","Istanbul","Izmir"};
    for(i=0;i<5;i++){
        puts(iller[i]);
    }
    char filmler[][40] = {"Snatch", "Lock, Stock & Two Smoking Barrels", "Life is Beautiful", "Office Space", "Forrest Gump"};

    puts("------------\nFilm Listesi\n------------");
    for(i=0;i<5;i++){
        puts(filmler[i]);
    }
    return 0;
}
