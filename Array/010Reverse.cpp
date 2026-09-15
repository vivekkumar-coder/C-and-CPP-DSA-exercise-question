#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

void Display(struct Array *arr){
    for(int i=0;i<arr->length;i++)
        cout<<arr->A[i]<<"  ";
}

void reverseMethod1(struct Array *arr)
{
    int i,j, *B;
    B=(int*)malloc(arr->length*sizeof(int));

    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}

void reverseMethod2(struct Array *arr)
{
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

void reverseMethod3(struct Array *arr)
{
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
       Swap(&arr->A[i],&arr->A[j]);
    }
}

int main() 
{
    struct Array arr={{2,4,6,8,10},10,5};

    Display(&arr);
    cout<<endl;
    reverseMethod1(&arr);
    cout<<endl;
    Display(&arr);
    cout<<endl;
    reverseMethod2(&arr);
    cout<<endl;
    Display(&arr);
    reverseMethod3(&arr);
    cout<<endl;
    Display(&arr);
    return 0;
}