#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bin_search(int tab[], int n, int szukana)
{
    int lewa=0, prawa=n-1, srodek;
    while(lewa<=prawa)
    {
        srodek=(lewa+prawa)/2;
        if(tab[srodek]==szukana)
        {
            return srodek;
        }
        else
        {
            if(tab[srodek]>szukana)
            {
                prawa=srodek-1;
            }
            else
            lewa=srodek+1;
        }
    }

    return -1;
}
int wielkosc=10000;
int tab[10000];

int main()
{
    srand(time(NULL));
    int n, pom, y=0, x;
    for(int i=0; i<wielkosc; i++) //losowanie elementow do tablicy
    {
        tab[i]=rand() % 1001;
    }
    for(int i=0; i<wielkosc; i++) //sortowanie tablicy
    {
        for(int j=i+1; j<wielkosc; j++)
        {
            if(tab[j]<tab[i])
            {
                pom=tab[j];
                tab[j]=tab[i];
                tab[i]=pom;
            }
        }
    }
  
    printf("Podaj liczbe naturalna z przedzialu od 0 do 1000\n");
    scanf("%i", &n);

    pom=bin_search(tab, wielkosc, n);
    if(pom==-1)
    {
        printf("\nNie ma takiego elementu w tej tablicy");
    }
    else
    {
        printf("Szukana wartosc jest na pozycji %i (przy zalozeniu, pierwszy element tablicy jest na pozycji 0)", pom);
    }
}
