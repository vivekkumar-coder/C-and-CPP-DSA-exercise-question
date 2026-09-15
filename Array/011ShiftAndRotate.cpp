#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << "  ";
}

void RotateLeft(struct Array *arr)
{
    int m = arr->A[0];
    for (int i = 0; i < arr->length - 1; i++)
        arr->A[i] = arr->A[i + 1];
    arr->A[arr->length - 1] = m;
}

void ShiftLeft(struct Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
        arr->A[i] = arr->A[i + 1];
    arr->A[arr->length - 1] = 0;
}

void ShiftRight(struct Array *arr)
{
    int i;
    for (i = arr->length - 1; i >= 1; i--)
        arr->A[i] = arr->A[i - 1];
    arr->A[0] = 0;
}

void RotateRight(struct Array *arr)
{
    int i, m = arr->A[arr->length - 1];
    for (i = arr->length - 1; i >= 1; i--)
        arr->A[i] = arr->A[i - 1];
    arr->A[0] = m;
}

int main()
{
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};
    Display(&arr);
    cout << endl;
    // ShiftLeft(&arr);
    Display(&arr);
    cout << endl;
    // ShiftRight(&arr);
    Display(&arr);
    cout << endl;
    // RotateLeft(&arr);
    Display(&arr);
    cout << endl;
    cout << endl;
    RotateRight(&arr);
    Display(&arr);
    cout << endl;
    return 0;
}