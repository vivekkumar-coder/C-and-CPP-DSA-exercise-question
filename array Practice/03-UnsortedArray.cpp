#include <iostream>
using namespace std;

int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int count = 0;
        if (A[i] != -1)
        {
            for (int j = i + 1; i < size; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[i] == -1;
                }
            }
        }
        cout<<count<<" occur of "<<A[i]<<endl;
    }

    return 0;
}