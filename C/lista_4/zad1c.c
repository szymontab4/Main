#include<stdio.h>

int main()
{
    int n;
    printf("Podaj dlugosc tablicy\n");
    scanf("%i", &n);
    double tab[n];
    double pom;

    printf("Podaj kolejne elementy tablicy");
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &tab[i]);
    }

    for(int i=0; i<n; i++) //sortowanie
    {
        for(int j=i+1; j<n; j++)
        {
            if(tab[j]<tab[i])
            {
                pom=tab[j];
                tab[j]=tab[i];
                tab[i]=pom;
            }
        }
    }
    printf("\nPosortowana tablica:\n");
    for(int i=0; i<n; i++)
    {
        printf("%.3f ", tab[i]);
    }
}