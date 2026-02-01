#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, pom;
    float x, y, z, n;
    char pytanie;

    printf("ktory przyklad a, b, c, ...? \n");
    scanf(" %c", &pytanie);

    switch(pytanie)
    {
        case 'a':
        {
            printf("podaj r \n");
            scanf("%f", &x);
            n=x*x*M_PI;
            printf(" \n Pole koła to około:" "%.2f \n" ,n);
            break;
        }

        case 'b':
        {
            printf("podaj r\n");
            scanf("%f", &x);
            n=4.0/3.0*M_PI*x*x*x;
            printf("Objetosc kola to około: %.2f \n", n);
            break;
        }

        case 'c':
        {
            printf("Podaj a i b \n");
            scanf("%f %f", &x, &y);
            n=sqrt((x*x)+(y*y));
            printf("Wynik to: " "%.2f \n", n);
            break;
        }

        case 'd':
        {
            printf("Podaj a, b oraz gamma w stopniach: \n");
            scanf("%f %f %f", &x, &y, &z);
            n=sqrt(x*x + y*y - 2*x*y*cos(M_PI/180 *z));
            printf("\n wynik to: " "%.2f \n", n);
            break;
        }

        case 'e':
        {
            printf("Podaj a, p, n \n");
            scanf("%f %f %f", &x, &y, &z);
            n=x*pow((1+y/100.00),z);
            printf("\n Wynik to około: %.2f", n);
            break;
        }

        case 'f':
        {
            printf("Podaj a, b, c \n");
            scanf("%f %f %f", &x, &y, &z);

            if(y+z==0)
            {
                printf("\n dzielenie przez 0, błąd");
                break;
            }
            n=(x*y/(y+z)+x*z/(y+z));

            printf("\n Wynik to około: %.2f \n", n);
            break;
        }

        printf("\n Nie ma takiego przykladu");
        break;

        

        

    }


}