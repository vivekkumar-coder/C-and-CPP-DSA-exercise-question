#include<iostream>
using namespace std;

int fact1(int n){
      if(n==0)
        return 1;
    int i, p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int fact2(int n){
      if(n==0)
        return 1;
    int i=1,p=1;
    while(i<=n){
        p*=i;
        i++;
    }
    return p;
}

int fact3(int n){
    if(n==0)
        return 1;
    return fact3(n-1)*n;
}

int main(){
    cout<<"Enter the number for factorial : ";
    int x;
    cin>>x;

    cout<<"By iterative for loop :   "<<fact1(x)<<endl
        <<"By iterative for while :   "<<fact2(x)<<endl
        <<"By Recurssive method :   "<<fact3(x)<<endl;
   
    return 0;
}