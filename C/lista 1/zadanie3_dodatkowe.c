#include<stdio.h>

int trojkat(int n, char znak)
{
    int x=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<x; j++)
        {
            printf("%c", znak);
        }
        printf("\n");
        x++;
    }

    return 0;
}


int main()
{
    int n, x;
    char znak;

    printf("Podaj znak oraz wymiar trojkata \n");
    scanf("%c %i", &znak, &n);
    printf("\n \n");

    trojkat(n, znak);

    return 0;
}