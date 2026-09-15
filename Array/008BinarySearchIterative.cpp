#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};

int BinarySearch(struct Array *arr, int key)
{
    int low, high, mid;
    low = 0;
    high = arr->length - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr->A[mid] == key)
            return mid;
        else if (key < arr->A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int BinarySearchIterative(struct Array *arr, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr->A[mid] == key)
            return mid;
        else if (key < arr->A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}


void Display(struct Array *arr)
{
    int i = 0;
    for (; i < arr->length; i++)
        cout << arr->A[i] << "  ";
}

int main()
{
    struct Array arr;
    cout << "Enter the size of array : ";
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout << "How many value you want to enter in array : ";
    cin >> arr.length;

    cout << "Enter the array the element of array in sorted from of ascending order : ";
    int i = 0, key;
    for (; i < arr.length; i++)
        cin >> arr.A[i];

    cout << "Enter the key : ";
    cin >> key;

    int result1 = BinarySearchIterative(&arr, 0, arr.length - 1, key);
    int result2 = BinarySearch(&arr, key);

    if (result1 != -1)
        cout << key << " key is found at index of " << result1 << endl;
    else
        cout << "not found" << result1 << endl;

    if (result2 != -1)
        cout << key << " key is found at index of " << result2 << endl;
    else
        cout << "not found" << result2 << endl;

    Display(&arr);
    return 0;
}