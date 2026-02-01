#include<stdio.h>
#include<math.h>

long long int silnia(long long int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    
    long long int sil=1;
    for(int i=1; i<=n; i++)
    {
        sil=sil*i;
    }
    return sil;
}

long long int newton(long long int n, long long int k)
{
    long long int pom;
    
    pom=silnia(n)/(silnia(k)*silnia(n-k));

    return pom;
}


int main()
{
    long long int n;

    printf("Podaj liczbę wierszy trojkata pascala \n \n");
    scanf("%lli", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }

        for(int j=0; j<=i; j++)
        {
            printf("%lli ",newton(i,j) );
        }
        printf("\n");

        //printf("\n %i", newton(2, 0));
    }
}