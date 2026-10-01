#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

// Move to front using swapping
int LinearSearchMoveToFront1(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            if (i != 0)
            {
                int temp = arr->A[i];
                arr->A[i] = arr->A[0];
                arr->A[0] = temp;
            }

            return i;
        }
    }

    return -1;
}

// Move to front using shifting
int LinearSearchMoveToFront(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            if (i != 0)
            {
                int temp = arr->A[i];

                for (int j = i; j > 0; j--)
                {
                    arr->A[j] = arr->A[j - 1];
                }

                arr->A[0] = temp;
            }

            return i;
        }
    }

    return -1;
}

void Display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << "  ";
    }

    cout << endl;
}

int main()
{
    struct Array arr;

    cout << "Enter the size of array: ";
    cin >> arr.size;

    // CORRECT: allocate an array
    arr.A = new int[arr.size];

    cout << "How many elements you want to enter in array: ";
    cin >> arr.length;

    // Validate length
    if (arr.length > arr.size)
    {
        cout << "Length cannot be greater than size." << endl;
        delete[] arr.A;
        return 0;
    }

    cout << "Enter the elements of array:\n";

    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    int key;

    cout << "Enter the key which you want to search: ";
    cin >> key;

    int result = LinearSearchMoveToFront(&arr, key);

    if (result != -1)
    {
        cout << "Found at index: " << result << endl;
        cout << "Array after Move-to-Front: ";
        Display(&arr);
    }
    else
    {
        cout << "Not found" << endl;
    }

    delete[] arr.A;

    return 0;
}
