#include<iostream>
using namespace std;

int fib(int n)
{
    int t0=0,t1=1,s,i=2;
    if(n<=1)
        return n;

    for(;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main()
{
    cout<<fib(7)<<endl;
    return 0;
}