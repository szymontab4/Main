#include<cstring>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

char wyraz[100];
int main()
{
    printf("Podaj napis:\n");
    cin.getline(wyraz, 100);
    
    if(wyraz[0]>='a' && wyraz[0]<='z') //sprawdzenie pierwszego wyrazu
    wyraz[0]=wyraz[0]-' ';

    for(int i=1; wyraz[i]!='\0'; i++)
    {
        if(i>=2 && (wyraz[i-2]=='.' || wyraz[i-2]=='!' || wyraz[i-2]=='?')) //sprawdzenie czy to kolejne zdanie, zmiana malej litery na duza
        {
            if(wyraz[i]>='a' && wyraz[i]<='z' && wyraz[i-1]==' ')
            {
                wyraz[i]=wyraz[i]-' ';
            }
        }
        else
        {
            if(wyraz[i]>='A' && wyraz[i]<='Z') //zmiana duzych na male
            {
                wyraz[i]=wyraz[i]+' ';
            }
        }
    }

    printf("\n");
    for(int i=0; wyraz[i]!='\0'; i++)
    {
        printf("%c", wyraz[i]);
    }


}