#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << "  ";
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            Swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    struct Array arr = {{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2}, 20, 10};

    Display(&arr);
    cout << endl;
    Rearrange(&arr);
    Display(&arr);

    return 0;
}