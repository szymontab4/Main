#include<stdio.h>

int main()
{
    char znak;
    int n, x=1;

    printf("Podaj znak i ilosc linijek");
    scanf("%c %i",&znak, &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<x; j++)
        {
            printf("%c", znak);
        }
        x++;
        printf("\n");
    }

}