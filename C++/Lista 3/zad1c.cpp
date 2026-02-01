#include<iostream>
#include<cmath>
#include<cstdlib>

void wprowadzenie(int tab1[10])
{
    printf("Podaj 10 liczb\n");
    for(int i=0; i<10; i++)
    {
        scanf("%i", &tab1[i]);
    }
}

void losowanie(int tab1[10])
{
    for(int i=0; i<10; i++)
    {
        tab1[i]=0+rand()%(100+1);
    }

    
}

void iloczyn(int tab1[10], int tab2[10])
{
    for(int i=0; i<10; i++)
    {
        tab1[i]=tab1[i]*tab2[i];
    }
}


using namespace std;

int tab1[10];
int tab2[10];



int main()
{
    int a, n;

    wprowadzenie(tab1);
    losowanie(tab2);
    iloczyn(tab1, tab2);

    for(int i=0; i<10; i++)
    {
        printf("\nWynik dzialania: %i  Liczba losowwa: %i", tab1[i], tab2[i]);
    }
}