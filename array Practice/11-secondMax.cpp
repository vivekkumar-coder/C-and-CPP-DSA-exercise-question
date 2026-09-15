#include <iostream>
using namespace std;

int main()
{
    int A[] = {5, 8, 3, 9, 10, 7, -1, 4};
    int size = sizeof(A) / sizeof(A[0]);
    int max = A[0], max2;
    for (int i = 1; i < size; i++)
    {

        if (max < A[i])
        {
            max2 = max;
            max = A[i];
        }
    }
    cout << max << "    " << max2 << endl;
    return 0;
}