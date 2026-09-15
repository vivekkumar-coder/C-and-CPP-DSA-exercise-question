#include<iostream>
using namespace std;

int power1(int m, int n){
    if(n==0)
        return 1;
    return power1(m,n-1)*m;
}

int power2(int m,int n){
    if(n==0)
        return 1;
    if(n%2==0)
        return power2(m*m,n/2);
    return m*power2(m*m,(n-1)/2);
}

int power3(int m, int n){
    int result =1;
    if(n==0)
        return 1;
    for(int i=1;i<=n;i++){
        result*=m;
    }
    return result;
}

int power4(int m, int n){
    int result =1, i=1;
    if(n==0)
        return 1;
    while(i<=n){
        result*=m;
        i++;
    }
    return result;
}

int main(){
  int r=power1(2,9),
   s=power2(3,6), 
   t= power3(2,10),
   u=power4(2,11);
  cout<<r<<endl
      <<s<<endl
      <<t<<endl
      <<u<<endl;
    return 0;
}