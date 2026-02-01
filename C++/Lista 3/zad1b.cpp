#include<iostream>
#include<cmath>

using namespace std;

int tab1[10][2];

int main()
{
    tab1[0][0]=1;
    tab1[0][1]=1;
    tab1[1][1]=1;

    for(int i=1; i<10; i++)
    {
        tab1[i][0]=tab1[i-1][0]*(i+1);
    }

    for(int i=2; i<10; i++)
    {
        tab1[i][1]=tab1[i-1][1]+tab1[i-2][1];
    }

    printf("%-3s %12s %8s \n", "n", "SIL", "FIB");
    for(int i=0; i<10; i++)
    {
        printf("%-3i %12i %8i \n", i+1 ,tab1[i][0] , tab1[i][1]);
    }

}