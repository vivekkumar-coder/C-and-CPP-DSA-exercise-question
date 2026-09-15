#include<iostream>
using namespace std;

int maxNumber(int A[], int size)
{
    int max=A[0];
    for(int i=1;i<size;i++)
        if(max<A[i])
            max=A[i];
    return max;
}

int minNumber(int A[], int size)
{
    int min=A[0];
    for(int i=1;i<size;i++)
        if(min>A[i])
            min=A[i];
    return min;
}

int main()
{
    int A[]={3,6,8,8,10,20,20,20,20,20,11,12,15,15,20};
    int size=sizeof(A)/sizeof(A[0]);
    int max=maxNumber(A,size);
    int min=minNumber(A,size);
    int* H=new int(max);

    for(int i=0;i<=max;i++) H[i]=0;

    for(int i=0;i<size;i++) H[A[i]]++;

    for(int i=min;i<=max;i++){
        if(H[i]>1)
            cout<<"Repeatition of "<<i<<" is "<<H[i]<<endl;
    }

}