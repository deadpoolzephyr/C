#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i,j;
    char temp[20];
    char s[4][20]={"tokyo","moskova","istanbul","berlin"};

    printf("String dizisinde bulunan kelimeler:\n");

    for(i=0;i<4;i++)
    {
        printf("%s\n",s[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],temp);
            }
        }
    }

    printf("\n\nKelimelerin siralanmis hali:\n");

    for(i=0;i<4;i++)
    {
        printf("%s\n",s[i]);
    }
return 0;
}
