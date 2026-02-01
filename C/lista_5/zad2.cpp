#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    struct osoba //tworzenie struktury dla danych osobowych
    {
        char imie[20];
        char nazwisko[40];
        int wiek;
        char miejsce_zamieszkania[50];
    };

    osoba tab[10];
    int n, x;
    printf("Ile osob chcesz wpisac?");
    scanf("%i", &x);

    for(int i=0; i<x; i++)
    {
        printf("Podaj indeks osoby ktora chcesz wpisac\n");
        scanf("%i", &n);
    
        printf("\nPodaj po kolei: imie, nazwisko, wiek, miejsce zamieszkania:\n"); //wczytywanie danych osobowych
        getchar(); //po to aby n nie psuło getline
        cin.getline(tab[n].imie, 20);
        cin.getline(tab[n].nazwisko,40);
        scanf("%i", &tab[n].wiek);
        getchar(); //zeby \n nie psulo getline
        cin.getline(tab[n].miejsce_zamieszkania, 50);
    }
    
    
    printf("\nCzy chcesz sprawdzić jakąś osobe? Jak tak napisz 1");
    scanf("%i", &n);
    if(n==1)
    {
        printf("\nPodaj indeks osoby ktora chcesz sprawdzic");
        scanf("%i", &n);
        printf("\n%s %s wiek: %i Miejsce zamieszkania: %s", tab[n].imie, tab[n].nazwisko, tab[n].wiek, tab[n].miejsce_zamieszkania);
    }
}