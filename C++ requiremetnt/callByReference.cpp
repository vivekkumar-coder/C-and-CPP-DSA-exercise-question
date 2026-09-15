#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10, y=20;

    swap(x,y);
    printf("%d %d\n",x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}