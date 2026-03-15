/*Napisz program do obliczania macierzy dwuwymiarowych o zadanym 
rozmiarze i wyświetlania ich zawartości. Program powinien wprowadzać wartości do macierzy 
wejściowych A i B oraz obliczać macierz wynikową. Zastosuj podstawowe operacje 
sumowania, odejmowania, mnożenia oraz transponowania macierzy.*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x, y, a, b, suma=0;
    printf("\nPodaj ilość wierszy i kolumn najpierw w pierwszej, potem w drugiej tabeli\n");
    scanf("%i %i %i %i", &x, &y, &a, &b);

    //indeksowanie kolejnych tablic
    int tab1[x][y];
    int tab2[a][b];
    int tab1tran[y][x];
    int tab2tran[b][a];
    int tabdodawanie[x][y];
    int tabodejmowanie1[x][y];
    int tabodejmowanie2[x][y];
    int tabmnozenie1[x][b];
    int tabmnozenie2[a][y];

    //wczytaneie danych do tablicy
    printf("Podaj %i kolejnych liczb z macierzy A\n", x*y);
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            scanf("%i", &tab1[i][j]);
        }
    }

    printf("\nPodaj %i kolejnych liczb z macierzy B\n", a*b);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%i", &tab2[i][j]);
        }
    }

    //dodawnie
    if(x!=a || y!=b)
    {
        printf("\nMacierze o roznym rozmiarze, nie mozna ich dodac ani odjac\n");
    }
    else
    {
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                tabdodawanie[i][j]=tab1[i][j]+tab2[i][j];
                tabodejmowanie1[i][j]=tab1[i][j]-tab2[i][j];
                tabodejmowanie2[i][j]=tab2[i][j]-tab1[i][j];
            }
        }
        cout<<endl<<"Wynik dodawania:"<<endl;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<tabdodawanie[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl<<"Wynik odejmowania B od A:"<<endl;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<tabodejmowanie1[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl<<"Wynik odejmowania A od B:"<<endl;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<tabodejmowanie2[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    //mnozenie
    if(y!=a)
    {
        printf("\nLiczba wierszy pierwszej macierzy jest rozna od liczby wierszy drugiej, nie mozna wykonac mnozenia\n");
    }
    else
    {
        int pom=0;
        for(int i=0; i<x; i++) //mnozenie macierzy A przez B
        {
            for(int j=0; j<b; j++)
            {
                pom=0;
                for(int z=0; z<a; z++)
                {
                    pom=pom+tab1[i][z]*tab2[z][j];
                }
                tabmnozenie1[i][j]=pom;
            }
        }
        cout<<"\nWynik mnozenia macierzy A przez B"<<endl;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<b; j++)
            {
                cout<<tabmnozenie1[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    //mnozenie macierzy B przez A
    if(b!=x)
    {
        printf("\nLiczba wierszy macierzy B jest rozna od liczby wierszy drugiej, nie mozna wykonac mnozenia\n");
    }
    else
    {
        int pom=0;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<y; j++)
            {
                pom=0;
                for(int z=0; z<x; z++)
                {
                    pom=pom+tab2[i][z]*tab1[z][j];
                }
                tabmnozenie2[i][j]=pom;
            }
        }
        cout<<"\nWynik mnozenia macierzy B przez A"<<endl;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<tabmnozenie2[i][j]<<" ";
            }
            cout<<endl;
        }
    }



    //transponowanie macierzy A
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            tab1tran[j][i]=tab1[i][j];
        }
    }

    //transponowanie macierzy B
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            tab2tran[j][i]=tab2[i][j];
        }
    }
    //wypisanie macierzy transponowanych
    printf("\n Wynik transponowania macierzy A:\n");
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout<<tab1tran[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Wynik transponowania macierzy B:"<<endl;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<tab2tran[i][j]<<" ";
        }
        cout<<endl;
    }
}
