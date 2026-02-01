#include<stdio.h>

int main()
{
    int srednia, suma=0, maxi, mini, n;

    printf("Podaj 10 liczb \n");
    scanf("%i", &n);
    suma=suma+n;
    maxi=n;
    mini=n;
    
    for(int i=1; i<10; i++)
    {
        scanf("%i", &n);

        suma=suma+n;
        
        if(maxi<n)
        {
            maxi=n;
        }
        if(mini>n)
        {
            mini=n;
        }
    }

    srednia=suma/10;

    printf("\n suma: %i średnia: %i max: %i mini: %i \n", suma, srednia, maxi, mini);
}