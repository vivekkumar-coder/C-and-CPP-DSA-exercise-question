#include <iostream>
using namespace std;

int maxElement(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (max < A[i])
            max = A[i];
    return max;
}

int minElement(int A[], int size)
{
    int min = A[0];
    for (int i = 1; i < size; i++)
    {
        if (min > A[i])
            min = A[i];
    }
    return min;
}

void Display(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << "  ";
    cout << endl;
}

int main()
{
    int A[] = {2, 4, 6, 10, 14, 16, 20};
    int size = sizeof(A) / sizeof(A[0]);
    int max = maxElement(A, size);
    int min = minElement(A, size);
    int differ = 2;
    int *h = new int[max + 1];
    for (int i = 0; i <= max; i++)
        h[i] = 0;

    for (int i = 0; i < size; i++)
    {
        h[A[i]] = 1;
    }

    for (int i = min; i <= max; i += differ)
    {
        if (h[i] == 0)
        {
            cout << i << " missing element is : " << i << endl;
            // if(i==((max-min)/differ)+1) break;
        }
    }

    delete[] h;
    return 0;
}