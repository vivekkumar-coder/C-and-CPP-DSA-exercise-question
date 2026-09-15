#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of char array : ";
    cin >> size;
    cin.ignore();

    char *A = new char[size];

    cout << "Enter the string is ";
    cin.getline(A, size);

    int i, j;
    for (j = 0; A[j] != 0; j++)
    {
    }
    for (i = 0, j = j - 1; i < j; i++, j--)
    {
        char t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    cout << "Reverse Array is " << A << endl;

    delete[] A;
    return 0;
}