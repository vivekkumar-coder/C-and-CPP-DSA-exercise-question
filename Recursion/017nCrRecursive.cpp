#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r)
{
    if(n==r||r==0)
        return 1;

    return nCr(n-1,r-1)+nCr(n-1,r);
}

int main(){
    cout<<"Enter the value of nCr : n and r  ";
    int n, r;
    cin>>n>>r;
    fact(n);
    cout<<nCr(n,r)<<endl;

    return 0;
}