#include<stdio.h>

int main()
{
    for(int i=32; i<=127; i++)
    {
        printf("Dziesiętna: %i ASCII: %c Szesnastkowo: %x Ósemkowo: %o \n", i, i, i, i);
    }
}