#include <iostream>
using namespace std;

int main()
{
    int A[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int size = sizeof(A) / sizeof(A[0]);
    int k;
    cout << "Enter sum K number is ";
    cin >> k;

    int i = 0, j = size - 1;
    for (; i < j;)
    {
        if (A[i] + A[j] == k)
        {
            cout << A[i] << " + " << A[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (A[i] + A[j] < k)
            i++;
        else
            j--;
    }
    return 0;
}