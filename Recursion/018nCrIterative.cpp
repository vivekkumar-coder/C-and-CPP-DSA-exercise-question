#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    int i=1,p=1;
    for(;i<=n;i++){
        p*=i;
    }
    return p;
}

int nCr(int n, int r)
{
   
    int num=fact(n);
    int dem=fact(n-r)*fact(r);
    return num/dem;
}

int main(){
    cout<<"Enter the value of nCr : n and r  ";
    int n, r;
    cin>>n>>r;
    fact(n);
    cout<<nCr(n,r)<<endl;

    return 0;
}