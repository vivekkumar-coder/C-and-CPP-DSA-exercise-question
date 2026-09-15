#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};

void Display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << "  ";
    }
    cout << endl;
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void Insert(struct Array *arr, int index, int value)
{
    int i;
    if (index <= arr->length && index >= 0)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}

/*
void Delete(struct Array *arr, int index)
{
    int i;
    if(index >=0 && index<arr->length)
    {
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}
*/

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index <= arr->length - 1)
    {
        x=arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{
    struct Array arr;
    cout << "Enter the size of array ";
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout << "How many element you want to enter in array : ";
    cin >> arr.length;

    int i;
    cout << "Enter the element of array \n";
    for (i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    Append(&arr, 10);
    Insert(&arr, 2, 20);
    cout<<Delete(&arr, 0)<<endl;
    Display(&arr);

    return 0;
}