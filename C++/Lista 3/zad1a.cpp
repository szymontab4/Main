#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int tab1[10];
int tab2[10];
int tab3[10];



int main()
{
    int a, n;
    printf("Podaj 10 liczb\n");

    for(int i=0; i<10; i++)
    {
        scanf("%i", &tab1[i]);
        tab2[i]=0+rand()%(100+1);

        tab3[i]=tab1[i]*tab2[i];
    }


    for(int i=0; i<10; i++)
    {
        printf("\nWynik mnozenia: %d  liczba losowa, przez ktora mnozylismy: %d", tab3[i], tab2[i]);
    }

    
}