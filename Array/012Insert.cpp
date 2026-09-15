#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << "  ";
}

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (x < arr->A[i] && i >= 0)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array *arr)
{
    for (int i = 0; i < arr->length - 2; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};

    Display(&arr);
    cout << endl;
    InsertSort(&arr, 25);
    Display(&arr);
    cout << endl
         << isSorted(&arr);

    return 0;
}