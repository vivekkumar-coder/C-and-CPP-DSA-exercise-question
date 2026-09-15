#include<iostream>
using namespace std;

int *fun(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    // p = new int(n);

    for(int i=0;i<n;i++)
    p[i]=i+1;
    

    return p;
}

// It is invalid
/*
int []fun1(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    // p = new int(n);
    return p;
}
*/

int main(){
    int *ptr,sz=7;
    ptr=fun(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}