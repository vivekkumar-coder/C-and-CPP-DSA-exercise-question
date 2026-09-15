#include <iostream>
using namespace std;

int main()
{
    int A[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int size = sizeof(A) / sizeof(A[0]);
    int k;
    cout << "Enter the sumK is ";
    cin >> k;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] + A[j] == k)
            {
                cout << A[i] << " + " << A[j] << " = " << k << endl;
            }
        }
    }
    return 0;
}