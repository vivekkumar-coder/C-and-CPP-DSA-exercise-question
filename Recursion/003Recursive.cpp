#include<iostream>
using namespace std;

int fun(int m){
    static int n=0;
    if(m>0){
        n++;
        return fun(m-1)+n;
    }
    return 0;
}

int main(){
    int x;
    x=fun(5);
    cout<<x<<endl;
    x=fun(5);
    cout<<x<<endl;
    return 0;
}