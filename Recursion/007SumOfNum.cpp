#include<iostream>
using namespace std;

int Sum1(int n){
    return n*(n+1)/2;
}

int Sum2(int n){
    int i, s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}

int Sum3(int n){
    int i=0,s=0;
    while(i<=n){
        s=s+i;
        i++;
    }
    return s;
}

int Sum4(int n){
    if(n==0){
        return 0;
    }
    return Sum4(n-1)+n;
}

int main(){
    int x;
    cout<<"Enter the sum of n number ";
    cin>>x;
    cout<<Sum1(x)<<endl
        <<Sum2(x)<<endl
        <<Sum3(x)<<endl
        <<Sum4(x)<<endl;

    return 0;
}