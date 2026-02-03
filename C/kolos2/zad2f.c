#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct student{
    char nazwisko[30];
    char imie[25];
    float stypendium;
    bool zaliczenie;
};

struct student tablica[100];

struct student funkcja(struct student *tab, int rozmiar)
{
    bool y=0;
    float mini;
    int pozycjamini=-1;

    for(int i=0; i<rozmiar; i++)
    {
        if(tab[i].zaliczenie==1)
        {
            if(y==0)
            {
                mini=tab[i].stypendium;
                pozycjamini=i;
                y=1;
            }
            else
            {
                if(tab[i].stypendium<mini)
                {
                    mini=tab[i].stypendium;
                    pozycjamini=i;
                }
            }

        }
    }

    if(pozycjamini!=-1)
    {
        return tab[pozycjamini];
    }
    else
    {
        printf("Zaden student nie zaliczyl");
    }
}