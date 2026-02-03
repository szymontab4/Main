#include<stdio.h>
#include<stdlib.h>

struct student{
    char imie[20];
    char nazwisko[20];
    int wiek;
};

struct student* tworzenie(int n)
{
    struct student *tab=(struct student*)calloc(n, sizeof(struct student));
    return tab;
}

void wpisywanie(struct student *tab, int rozmiar)
{
    for(int i=0; i<rozmiar; i++)
    {
        scanf("%s %s %d", tab[i].imie, tab[i].nazwisko, &tab[i].wiek);
    }
}



int main()
{
    int n;
    scanf("%d", &n);

    struct student *tab=tworzenie(n);
    wpisywanie(tab, n);

    free(tab);

}