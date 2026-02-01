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

    for(int i=0; wyraz[i]!='\0'; i++)
    {
        if(wyraz[i]=='z') //sprawdzanie czy to z
        {
            wyraz[i]='A';
        }
        else
        {
            if(wyraz[i]=='Z') //sprawdzanie czy to Z
            {
                wyraz[i]='a';
            }
            else
            {
                if((wyraz[i]>='a' && wyraz[i]<'z') || (wyraz[i]>='A' && wyraz[i]<'Z')) //zamiana liter oprocz z i Z
                {
                    wyraz[i]=wyraz[i]+1;
                }
            }
        }
    }
    printf("\n");
    int i=0;
    while(wyraz[i]!='\0')
    {
        printf("%c",wyraz[i]);
        i++;
    }

}