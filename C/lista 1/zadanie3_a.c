#include<stdio.h>

int main()
{
    int a, b, s;
    printf("Podaj a i b \n");
    scanf("%i %i", &a, &b);

    if(a>b)
    {
        printf("\nPierwsza liczba jest większa od drugiej");
    }
    else
    {
        if(a==b)
        {
            printf("Podane liczby są równe");
        }
        else
        {
            printf("Druga liczba jest większa od pierwszej");
        }
    }

    s=a+b;

    printf("\n Suma podancyh liczb wynosi: %i \n", s);

    return 0;
}