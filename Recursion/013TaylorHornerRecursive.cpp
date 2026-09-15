#include<iostream>
using namespace std;

double e(double x, double n)
{
    static double sum=1;
    if(n==0)
        return sum;

    sum=1+x/n*sum;
    return e(x,n-1);
}

int main()
{
    cout<<e(1,10)<<endl;
    return 0;
}