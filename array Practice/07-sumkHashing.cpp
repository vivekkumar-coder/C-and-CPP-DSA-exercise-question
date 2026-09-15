#include <iostream>
using namespace std;

int max(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (A[i] > max)
            max = A[i];
    return max;
}

int min(int A[], int size)
{
    int min = A[0];
    for (int i = 1; i < size; i++)
        if (A[i] < min)
            min = A[i];
    return min;
}

int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int size = sizeof(A) / sizeof(A[0]);
    int k;
    cout << "Enter the sumK is ";
    cin >> k;
    int minimum = min(A, size);
    int maximum = max(A, size);
    int *p;
    p = new int(maximum + 1);
    for (int i = 0; i <= maximum; i++)
    {
        p[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (k - A[i] >= 0 && k - A[i] <= maximum)
        {
            if (p[k - A[i]] != 0)
            {
                cout << A[i] << " + " << k - A[i]
                     << " = " << k << endl;
            }
        }

        p[A[i]]++;
    }

    delete[] p;

    return 0;
}