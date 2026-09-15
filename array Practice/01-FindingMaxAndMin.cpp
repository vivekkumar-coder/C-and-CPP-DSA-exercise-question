#include <iostream>
using namespace std;

void maxMin(int A[], int size, int result[2])
{
    int min = A[0], max = A[0];
    for (int i = 1; i < size; i++)
    {
        if (max < A[i])
            result[0] = A[i];
        else if (min > A[i])
            result[1] = A[i];
    }
}

int main()
{
    int A[] = {6, 8, 3, 9, 6, 2, 10, 7, -1, 4};
}