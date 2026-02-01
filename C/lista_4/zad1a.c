#include<stdio.h>
#include<string.h>

int tab1[256];

int main()
{
    int n, x, pom;
    printf("Podaj napis\n");
    char napis[100];

    scanf("%s",napis);

    int i=0;
    while(napis[i]!='\0')
    {
        tab1[napis[i]]++;
        i++;
    }

    for(int i=0; i<256; i++)
    {
        if(tab1[i]>1)
        {
            printf("\nZnak to: %c oraz wystapil %i razy", i, tab1[i]);
        }
        if(tab1[i]==1)
        {
            printf("\nZnak to: %c oraz wystapil %i raz", i, tab1[i]);
        }
    }
}

