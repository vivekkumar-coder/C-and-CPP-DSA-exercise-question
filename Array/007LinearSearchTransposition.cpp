#include<iostream>
using namespace std;

struct Array
{
    int A=10;
    int size;
    int length;
};

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(int arr[],int key){
    int i=0;
    for(;i<10;i++){
        if(key==arr[i]){
            swap(&arr[i],&arr[i-1]);
            return i-1;
        }
    }
    return -1;
}

void Display(int arr[]){
    int i=0;
    for(;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int result=LinearSearch(arr, 5);
    if(result>=0)
        cout<<"The element is found at index "<<result<<endl;
    else
        cout<<"Not found";
    cout<<endl;
    Display(arr);

    return 0;
}