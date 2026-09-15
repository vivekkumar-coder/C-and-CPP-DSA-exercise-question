#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of string : ";
    cin >> size;

    char *A = new char[size + 1];
    cin.ignore();

    cout << "Enter the string : ";
    cin.getline(A, size + 1);

    for (int i = 0; A[i] != '\0'; i++)
    {
        int count = 1;
        if (A[i] == ' ')
            continue;
        for (int j = i + 1; A[j] != '\0'; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                A[j] = ' ';
            }
        }
        if (count > 1)
        {
            cout << A[i] << " " << count << endl;
        }
    }

    delete[] A;

    return 0;
}