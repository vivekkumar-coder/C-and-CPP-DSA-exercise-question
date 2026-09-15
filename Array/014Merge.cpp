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

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    // struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    struct Array *arr3 = new Array();

    /*
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

        */
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            i++;
        }
        else
        {
            arr3->A[k] = arr2->A[j];
            j++;
        }
        k++;
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
        k++;
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
        k++;
    }
    /*
    while(i < arr1->length)
       arr3->A[k++] = arr1->A[i++];

    while(j < arr2->length)
      arr3->A[k++] = arr2->A[j++];
    */
    arr3->length = arr2->length + arr1->length;
    arr3->size = arr2->size + arr1->size;
    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    Display(&arr1);
    cout << endl;
    Display(&arr2);
    cout << endl;
    Display(arr3);

    return 0;
}