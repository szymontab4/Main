#include<stdio.h>
#include<stdbool.h>


struct ksiazki{
    char tytul[50];
    char autor[30];
    unsigned int liczba_stron;
    bool wypozyczona;
};

struct ksiazki tab[200];

void funkcja(struct ksiazki *tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        if(tab[i].wypozyczona==0 && tab[i].liczba_stron>100)
        {
            printf("\n%s", tab[i].tytul);
        }
    }
}