#include <iostream>
using namespace std;

int main()
{
    // String first
    int size1;
    cout << "Enter the size of string first ";
    cin >> size1;
    cin.ignore();

    char *A = new char[size1 + 1];

    cout << "Enter the string first is ";
    cin.getline(A, size1 + 1);

    // Second string
    int size2;
    cout << "Enter the size of string second ";
    cin >> size2;
    cin.ignore();

    char *B = new char[size2 + 1];

    cout << "Enter the string second is ";
    cin.getline(B, size1 + 1);

    int i = 0, j = 0;
    for (; A[i] != '\0' || B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }
    if (A[i] == B[j])
        cout << "Equal" << endl;
    else if (A[i] > B[j])
        cout << "String A is greater. " << endl;
    else
        cout << "String B is greater " << endl;

    delete[] A;
    delete[] B;
    return 0;
}