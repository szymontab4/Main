#include<stdio.h>
#include<stdlib.h>

int funkcja()
{
    FILE *plik;
    plik=fopen("liczby.dat", "rb");

    int n, licznik=0;
    char pom1, pom2;

    if(plik!=NULL)
    {
        fseek(plik, 0, SEEK_SET);
        fread(&pom1, sizeof(char), 1, plik);

        while(fread(&pom2, sizeof(char), 1, plik)==1)
        {
            if(pom1=='a' || pom1=='b' || pom1=='c')
            {
                if(pom1==pom2)
                {
                    licznik++;
                }
            }
            pom1=pom2;
        }

        fclose(plik);
        return licznik;
    }
    
}