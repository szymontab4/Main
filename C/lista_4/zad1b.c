#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tab[10000];

int main()
{
    srand(time(NULL));
    for(int i=0; i<10000; i++) //wstawienie losowych elementow do tablicy
    {
        tab[i]=rand() % 1001;
    }

    int n, pom, y=0;
    printf("Podaj liczbe naturalna z przedzialu od 0 do 1000\n");
    scanf("%i", &n);

    for(int i=0; i<10000; i++)
    {
        if(tab[i]==n)
        {
            printf("\nPierwsze wystapienie tej liczby jest na pozycji %i\n",i);
            y=1;
            break;
        }
    }
    
    if(y==0)
    printf("\nNie znalezniono takiej liczby");
}
