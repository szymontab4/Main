#include<stdio.h>

int main()
{
    float suma=0;
    int n;

    printf("Podaj n \n");
    scanf("%i", &n);

    for(int i=1; i<=n; i++)
    {
        suma=suma+(1./(3*i+1));
    }

    printf("Suma szeregu to około: %.2f", suma);
}