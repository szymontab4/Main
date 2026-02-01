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
    
    if(wyraz[0]>='a' && wyraz[0]<='z') //sprawdzenie pierwszego znaku
    wyraz[0]=wyraz[0]-' ';

    for(int i=1; wyraz[i]!='\0'; i++)
    {
        if(wyraz[i-1]==' ')
        {
            if(wyraz[i]>='a' && wyraz[i]<='z') //zamiana pierwszych znakow w wyrazie na duze
            {
                wyraz[i]=wyraz[i]-' ';
            }
        }
        else
        {
            if(wyraz[i]>='A' && wyraz[i]<='Z') //zmiana duzych liter w srodku napisu na duze
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