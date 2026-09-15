#include <iostream>
using namespace std;

int main()
{
    char A[100], B[100];
    cout << "Enter a String : ";
    cin.getline(A, 100);
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    cout << "Reverse String : " << B << endl;

    return 0;
}