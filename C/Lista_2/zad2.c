#include<stdio.h>

int main()
{
    int i, j, k, pomi, pomj, pomk, *p;

    printf("Podaj wartości i, j, k \n");
    scanf("%i %i %i", &pomi, &pomj, &pomk);

    i=pomi;
    j=pomj;
    k=pomk;

    k==++i+j++;
    printf("\na) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;
    
    k=i++*++j;
    printf("b) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k=i+++--j;
    printf("c) %i\n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k=-i++/++j;
    printf("d) %i\n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k=-i++-j--;
    printf("e) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k+=-i++-++j;
    printf("f) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;
    
    k=(i++)+(++j);
    printf("g) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k=*&i*j;
    printf("h) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    p=&i;
    k=*p*j;
    printf("i) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    -k--==--i;
    printf("j) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    k^=i^j;
    printf("k) %i \n", k);
    i=pomi;
    j=pomj;
    k=pomk;

    ++k==++k+--i^j--;
    printf("l) %i \n", k);
 

}