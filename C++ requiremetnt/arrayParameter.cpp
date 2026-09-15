#include <iostream>
using namespace std;

void fun(int A[], int n){
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }

}

void fun1(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
}
void fun2(int *A,int n){
    A[0]=100;
}

int main(){
    int A[5]={2,4,6,8,10};
    int n=5;
    fun(A,5);
    fun2(A,5);

for(int x:A){
        cout<<x<<endl;
}

    return 0;
}

