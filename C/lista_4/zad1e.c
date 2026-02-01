#include<stdio.h>

void mnozenie(int n)
{
    int x;
    printf("Tablica mnozenia:\n   ");
    for(int i=1; i<=n; i++)
    {
        printf("\033[31m%3i ",i);
    }
    for(int i=1; i<=n; i++)
    {
        printf("\n\033[31m%2i\033[0m ", i);
        for(int j=1; j<=n; j++)
        {
            x=i*j;
            printf("%3i ",x);
        }
    }
}

void dodawanie(int n)
{
    int x;
    printf("Tablica dodawania:\n   ");
    for(int i=1; i<=n; i++)
    {
        printf("\033[31m%3i ",i);
    }
    for(int i=1; i<=n; i++)
    {
        printf("\n\033[31m%2i\033[0m ", i);
        for(int j=1; j<=n; j++)
        {
            x=i+j;
            printf("%3i ",x);
        }
    }
}

int main()
{
    int n;
    printf("Podaj zakres tabliczek mnozenia i dodawania od 1 do 10\n");
    scanf("%i", &n);
    mnozenie(n);
    printf("\n\n\n");
    dodawanie(n);
}