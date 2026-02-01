#include<stdio.h>
#include<math.h>

double arytmetyczna(double tab[], int n)
{
    double srednia=0;
    for(int i=0; i<n; i++)
    {
        srednia=srednia+tab[i];
    }  
    srednia=srednia/n;
    return srednia;
}

double geometryczna(double tab[], int n)
{
    double srednia=tab[0];
    for(int i=1; i<n; i++)
    {
        srednia=srednia*tab[i];
    }
    srednia=pow(srednia, 1.0/n);
    return srednia;
}

double harmoniczna(double tab[], int n)
{
    double srednia=0;
    for(int i=0; i<n; i++)
    {
        srednia=srednia+(1.0/tab[i]);
    }

    srednia=n/srednia;
    return srednia;
}

double kwadratowa(double tab[], int n)
{
    double srednia=0;
    for(int i=0; i<n; i++)
    {
        srednia=srednia+pow(tab[i], 2);
    }
    srednia=srednia/n;
    srednia=sqrt(srednia);
    return srednia;
}

double mediana(double tab[], int n)
{
    double tab2[n];
    double pom, x;
    for(int i=0; i<n; i++)//kopia tablicy
    {
        tab2[i]=tab[i];
    }
    for(int i=0; i<n; i++)//sortowanie
    {
        for(int j=i+1; j<n; j++)
        {
            if(tab2[j]<tab2[i])
            {
                pom=tab2[j];
                tab2[j]=tab2[i];
                tab2[i]=pom;
            }
        }
    }

    if(n%2==0)
    {
        x=(tab2[n/2])+(tab2[(n/2)-1]);
        x=x/2.0;
    }
    if(n%2==1)
    x=tab2[n/2];
    return x;
}

double moda(double tab[], int n)
{
    double tab2[n];
    double pom, x;
    for(int i=0; i<n; i++)//kopia tablicy
    {
        tab2[i]=tab[i];
    }
    for(int i=0; i<n; i++)//sortowanie
    {
        for(int j=i+1; j<n; j++)
        {
            if(tab2[j]<tab2[i])
            {
                pom=tab2[j];
                tab2[j]=tab2[i];
                tab2[i]=pom;
            }
        }
    }
    int licznik=1, maxi=1;
    double liczba, maxiliczba=tab2[0];

    for(int i=1; i<n; i++)
    {
        if(tab2[i]==tab2[i-1])
        {
            licznik++;
            if(licznik>maxi)
            {
                maxi=licznik;
                maxiliczba=tab2[i];
            }
        }
        else
        {
            licznik=1;
        }
    }
    return maxiliczba;
}



int main()
{
    char *nazwy[6]={"Arytmetyczna", "Geometryczna", "Harmoniczna", "Kwadratowa", "Mediana", "Moda"};
    int n;
    printf("Podaj liczbe elementow tablicy\n");
    scanf("%i", &n);
    double tab[n], pom;
    char *pomnazw;
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &tab[i]);
    }
    double srednie[6];
    srednie[0]=arytmetyczna(tab, n);
    srednie[1]=geometryczna(tab, n);
    srednie[2]=harmoniczna(tab, n);
    srednie[3]=kwadratowa(tab, n);
    srednie[4]=mediana(tab, n);
    srednie[5]=moda(tab, n);


    for(int i=0; i<6; i++) //sortowanie
    {
        for(int j=i+1; j<6; j++)
        {
            if(srednie[j]<srednie[i])
            {
                pom=srednie[j];
                srednie[j]=srednie[i];
                srednie[i]=pom;

                pomnazw=nazwy[j];
                nazwy[j]=nazwy[i];
                nazwy[i]=pomnazw;
            }
        }
    }

    for(int i=0; i<6; i++)
    {
        printf("\n%s: %f", nazwy[i], srednie[i]);
    }

}
