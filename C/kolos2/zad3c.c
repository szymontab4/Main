#include<stdlib.h>
#include<stdio.h>

void funkcja()
{
    FILE *plik;
    plik=fopen("liczby.bin", "r+b");

    int n, pom1, pom2;

    if(plik!=NULL)
    {
        fseek(plik, 0, SEEK_END);
        n=ftell(plik)/sizeof(int);

        for(int i=0; i<n/2; i++)
        {
            fseek(plik, i*sizeof(int), SEEK_SET);
            fread(&pom1, sizeof(int), 1, plik);
            fseek(plik, (-1)*(i+1)*sizeof(int), SEEK_END);
            fread(&pom2, sizeof(int), 1, plik);
            fseek(plik, (-1)*(i+1)*sizeof(int), SEEK_END);
            fwrite(&pom1, sizeof(int), 1, plik);
            fseek(plik, i*sizeof(int), SEEK_SET);
            fwrite(&pom2, sizeof(int), 1, plik);
        }

        fclose(plik);
    }
    

}