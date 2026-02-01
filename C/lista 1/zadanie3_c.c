#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2, y, p, q, n, delta, pier;

    printf("Podaj a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);

    delta=b*b-(4*a*c);

    p=(-b)/(2*a);
    q=delta/(-4*a);

    pier=sqrt(delta);

    x1=(-b-pier)/(2*a);
    x2=(-b+pier)/(2*a);

    if(delta>0)
    {
        printf("Wspolrzedne wierzcholka to:(%.2f,%.2f) \nmiejsca zerowe to: (%.2f,0) i (%.2f,0) \nPrzeciecie z osia OY to: (0,%.2f)\n", p,q,x1,x2,c);
    }
    else
    {
        if(delta==0)
        {
            printf("Wspolrzedna wierzcholka to:(%.2f,%.2f) \nmiejsce zerowe to: (%.2f,0) \nPrzeciecie z osia OY to: (0,%.2f)\n", p,q,x1,c);
        }
        else
        {
            printf("Wspolrzedne wierzcholka to:(%.2f,%.2f) \nBrak miejsc zerowych \nPrzeciecie z osia OY to: (0,%.2f)\n", p,q,c);
        }
    }




}