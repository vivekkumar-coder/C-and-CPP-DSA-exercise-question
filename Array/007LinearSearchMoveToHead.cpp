//Move to head 0r move to Front
#include<iostream>
using namespace std;

struct Array 
{
    int *A;
    int size;
    int length;
};

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

int LinearSearchMoveToFront(struct Array *arr, int key)
{
    int i=0;
    for(;i<arr->length;i++){
        if(key==arr->A[i]){
            if(i!=0){
                int temp = arr->A[i];
                arr->A[i]=arr->A[0];
                arr->A[0]=temp;  
            }
            // swap(&arr->A[i],&arr->A[0]);
            return 0;
        }
    }
    return -1;
}

void Display(struct Array *arr)
{
    int i=0;
    for(;i<arr->length;i++)
        cout<<arr->A[i]<<"  ";
}

int main()
{
    struct Array arr;
    cout<<"Enter the size of array : ";
    cin>>arr.size;

    arr.A=new int(arr.size);
    cout<<"How many element you want to enter in array: ";
    cin>>arr.length;
    cout<<"Enter the element of array : \n";
    int i=0, key;
    for(;i<arr.length;i++){
        cin>>arr.A[i];
    }

    cout<<"Enter the key which you want to search :  ";
    cin>>key;

    int result = LinearSearchMoveToFront(&arr, key);
    if(result!=-1)
        // cout<<"Key "<< key<<" is found at "<< result<<endl;
        cout<<"Found at index "<<result;
    else 
        cout<<"not found";
    
    cout<<endl;
    
    Display(&arr);
    return 0;


}

