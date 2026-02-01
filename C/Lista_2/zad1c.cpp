#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    float a;
    a=M_PI;
    for(int i=0; i<=10; i++)
    {

        cout<<setprecision(i)<<fixed<<a<<endl;
    }
}