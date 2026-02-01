#include<cstring>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int tab[300];
char wyraz[100];
int main()
{
    printf("Podaj napis:\n");
    cin.getline(wyraz, 100);

    int i=0, cyfry=0, litery=0, inne=0;
    while(wyraz[i]!='\0') 
    {
        tab[wyraz[i]]++; //zliczanie elementow
        i++;
    }

    for(int i=0; i<300; i++)
    {
        if(i>='0' && i<='9')  //zliczanie cyfr, liter, innych
        {
            cyfry+=tab[i];
        }
        else
        {
            if((i>='a' && i<='z') || (i>='A' && i<='Z'))
            {
                litery+=tab[i];
            }
            else
            {
                inne+=tab[i];
            }
        }
    }

    printf("\nLiczba cyfr: %i\nLiczba liter: %i\nLiczba innych znakow: %i",cyfry,litery,inne);

}