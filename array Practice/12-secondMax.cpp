#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int A[] = {5, 8, 3, 9, 10, 7, -1, 4};
    int size = sizeof(A) / sizeof(A[0]);

    int max = A[0];

    // Find largest
    for (int i = 1; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
    }

    // Find second largest
    int max2 = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (A[i] != max && A[i] > max2)
            max2 = A[i];
    }

    cout << max << " " << max2 << endl;

    return 0;
}