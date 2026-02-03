#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct student{
    char nazwisko[25];
    char imie[15];
    int wiek;
    bool zaliczenie;
};

struct student tab[50];

void funkcja(struct student *tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        if(tab[i].imie[0] == tab[i].nazwisko[0])
        {
            printf("%s %s\n", tab[i].imie, tab[i].nazwisko);
        }
    }
}