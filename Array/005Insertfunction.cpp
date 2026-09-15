#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
        printf("%d  ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (arr->length >= index && index >= 0)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr;
    printf("Enter the size of array");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("How many element you want to enter ");
    scanf("%d", &arr.length);

    int n, i;
    n = arr.length;

    printf("Enter the element of array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    Append(&arr, 10);
    Insert(&arr, 3, 15);
    display(arr);

    return 0;
}