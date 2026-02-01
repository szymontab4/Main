#include<iostream>

using namespace std;


int potega(int a, int n)
{
    int x;
    if(n==0)
    {
        printf("%i^0=%i\n", a, 1);
        return 1;
    }
    else
    {
        
         x=a*potega(a, n-1);
         printf("%i^%i=%i\n", a, n, x);
         return(x);
    }
}
int main()
{
    int a, n;
    printf("Podaj liczbe i potege\n");
    scanf("%d %d", &a, &n);

    printf("Kolejne potegi liczby %i\n", a);
    printf("\n%d", potega(a,n));
}