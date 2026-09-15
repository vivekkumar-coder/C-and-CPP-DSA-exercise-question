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
    for (; i < arr->length; i++)
        cout << arr->A[i] << "  ";
}

int BinarySearchRecursive(struct Array *arr, int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    if (low <= high)
    {
        if (arr->A[mid] == key)
            return mid;
        else if (key < arr->A[mid])
            return BinarySearchRecursive(arr, low, mid - 1, key);
        else
            return BinarySearchRecursive(arr, mid + 1, high, key);
    }
    return -1;
}


int main()
{
    struct Array arr;
    cout << "Enter the size of array : ";
    cin >> arr.size;
    cout << "How many element you want to enter in array : ";
    cin >> arr.length;
    arr.A = new int[arr.size];
    int i = 0, key;
    for (; i < arr.length; i++)
        cin >> arr.A[i];
    cout << "Enter the key : ";
    cin >> key;

    int result = BinarySearchRecursive(&arr, 0, arr.length, key);
    if (result != -1)
        cout << key << " key is at index " << result << endl;
    else
        cout << "Not found" << endl;

    Display(&arr);

    return 0;
}