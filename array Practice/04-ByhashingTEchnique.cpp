#include <iostream>
using namespace std;

int max(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (max < A[i])
            max = A[i];
    return max;
}

int min(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (max > A[i])
            max = A[i];
    return max;
}

int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(A) / sizeof(A[0]);
    int minimum = min(A, size);
    int maximum = max(A, size);

    int H[100];
    for (int i = 0; i <= maximum; i++)
        H[i] = 0;

    for (int i = 0; i < size - 1; i++)
    {
        H[A[i]]++;
    }

    for (int i = minimum; i <= maximum; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " is occurance  : " << H[i] << endl;
        }
    }

    return 0;
}