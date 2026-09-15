#include <iostream>
using namespace std;

int main()
{
    int A[] = {5, 8, 3, 9, 10, 7, -1, 4};
    int size = sizeof(A) / sizeof(A[0]);
    int min = A[0], max = A[0];
    for (int i = 1; i < size; i++)
    {
        if (min > A[i])
            min = A[i];
        else if (max < A[i])
            max = A[i];
    }
    cout << max << "    " << min << endl;
    return 0;
}