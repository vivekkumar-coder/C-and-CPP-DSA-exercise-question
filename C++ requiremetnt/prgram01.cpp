#include<iostream>
using namespace std;

int main(){
    // int A[5];
    // A[0]=12;
    // A[1]=15;
    // A[2]=25;

    int A[10]={2,4,6,8,10,12,14};

    for(int i=0;i<10;i++){
        cout<<A[i]<<endl;
    }

    for(int x:A){
        cout<<x<<endl;
    }

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n",A[2]);



    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int B[n];

    for(int x:B){
        cout<<x<<endl;
    }

    return 0;
}