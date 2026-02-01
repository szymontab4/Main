#include<stdio.h>

int main()
{
    int a, b, c, n=0, suma, srednia;
    printf("Podaj a, b, c \n");
    scanf("%i", &a);
    n++;

    scanf("%i", &b);
    n++;

    scanf("%i", &c);
    n++;


    suma=a+b+c;
    srednia=suma/n;

    if(srednia>5)
    {
        printf("Wysoka średnia \n");
    }
    
    printf("srednia to: %i \nsuma to: %i \n", srednia,suma);

    return 0;

}