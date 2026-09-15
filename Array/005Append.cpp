#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;

    // int A[10];
    // int size;
    // int length;
};

void Display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<"   ";
}

int main()
{
    struct Array arr;
    cout<<"Enter the size of array : ";
    cin>>arr.size;

    arr.A=new int(arr.size);
    arr.length=0;
    
    int i,n;

    cout<<"How many number you want to enter : ";
    cin>>n;
    cout<<"\nEnter the elements of array : ";
    
    for(i=0;i<n;i++)
        cin>>arr.A[i];

    arr.length=n;
    
    Display(arr);
    

    return 0;
}