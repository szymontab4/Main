#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void losowanie(int tab[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i]=rand()% 100000;
    }
}
float srednia(int tab[], int n)
{
    float suma=0;
    for(int i=0; i<n; i++) 
    {
        suma=suma+tab[i];
    }

    suma=suma/n;
    return suma;
}

float mediana(int tab[], int n)
{
    float pom, x;
    for(int i=0; i<n; i++)//sortowanie tablicy
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

        if(n%2==0)
        {
            x=(tab[n/2]+tab[(n/2)-1])/2.0;
        }
        else
        x=tab[n/2];

    return x;
}

float moda(int tab[], int n)
{
    int wielkosc=100000;
    int tab2[wielkosc];
    float max=-1, pommax;
    for(int i=0; i<wielkosc; i++)//zerowanie tab2
    {
        tab2[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        tab2[tab[i]]++;
    }

    for(int i=0; i<wielkosc; i++)
    {
        if(tab2[i]>max)
        {
            max=tab2[i];
            pommax=i;
        }
    }
    
    return pommax;
}




int main()
{
    float sr, medi, mod;
    int licznik=1000;
    int tablica[licznik];
    losowanie(tablica,licznik);
    sr=srednia(tablica, licznik);
    medi=mediana(tablica, licznik);
    mod=moda(tablica, licznik);

    printf("\nSrednia: %.3f\nMediana: %.3f\nModa: %.3f", sr, medi, mod);
}