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

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    // struct Array  *arr3=new Array();

    while (i < arr1->length)
    {
        arr3->A[k++] = arr1->A[i++];
    }
    while (j < arr2->length)
    {
        while (i < arr1->length)
        {
            if (arr3->A[i] != arr2->A[j])
                arr3->A[k++] = arr2->A[j++];

            // else
            //     return;
            i++;
        }

        j++;
    }
    arr3->size = arr1->size + arr2->size;

    return arr3;
}

int main()
{
    struct Array arr1 = {{3, 5, 10, 4, 6}, 10, 5};
    struct Array arr2 = {{12, 4, 7, 2, 5}, 10, 5};
    struct Array *arr3;
    arr3 = Union(&arr1, &arr2);
    Display(&arr1);
    cout << endl;
    Display(&arr2);
    cout << endl;
    Display(arr3);
    cout << endl;

    struct Array arr4 = {{3, 4, 5, 6, 10}, 10, 5};
    struct Array arr5 = {{2, 4, 5, 7, 12}, 10, 5};
    struct Array *arr6;

    return 0;
}