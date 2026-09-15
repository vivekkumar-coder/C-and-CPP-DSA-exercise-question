#include<iostream>
using namespace std;


// Finding Duplicate in sorted array 
// counting duplication in sorted array
int main()
{

    int A[]={3,6,8,8,10,12, 15,15,15,20};
    int size=sizeof(A)/sizeof(A[0]);

    int lastDulication=0;
    int j=0;
    for(int i=0;i<size;i++){
        if(A[i]==A[i+1] ){
            j=i+1;
            while(A[i]==A[j]) j++;
            cout<<" its repeation of "<< A[i]<<" is " << j-i<<endl;
            i=j-1;
        }
    }
    return 0;
}