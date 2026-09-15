#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << "    ";
    }
}

int linearSearch(struct Array *arr, int key){
    int i;
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            return i;
        }
    }
    return -1;
}



int main()
{
    struct Array arr;
    cout << "Enter the size of array : ";
    cin >> arr.size;
    
    cout << "how Many element you want to enter : ";
    cin >> arr.length;
    
    arr.A = new int[arr.length];
    
    cout << "Enter the element of array " << endl;
    int i;
    for (i = 0; i < arr.length; i++)
    cin >> arr.A[i];

   
    Display(&arr);
    int result=linearSearch(&arr, 3);
    if(result>=0)
        cout<<"Element found at index " << result<<endl;
    else
        cout<<"Not found";

    return 0;
}


