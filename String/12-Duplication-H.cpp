#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of string are ";
    cin >> size;
    cin.ignore();

    char *A = new char[size + 1];
    cout << "Enter the string first are " << endl;
    cin.getline(A, size + 1);

    int *H = new int[26]{0};

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            H[A[i] - 65]++;
        }
        else if (A[i] <= 'z' && A[i] >= 'a')
        {
            H[A[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] >> 1)
            cout << char('A' + i) << " : " << H[i] << endl;
    }

    delete[] A;
    delete[] H;

    return 0;
}