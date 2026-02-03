#include<stdio.h>

void funkcja(char *tab)
{
    int rozmiar, y=0;
    for(rozmiar=0; tab[rozmiar!='\0']; rozmiar++);

    for(int i=0; i<rozmiar/2; i++)
    {
        if(tab[i]!=tab[rozmiar-1-i])
        {
            y=1;
            break;
        }
    }

    if(y==0)
    {
        printf("tablica jest symetryczna");
    }
    else
    {   
        printf("Tablica nie jest symetryczna");
    }
}