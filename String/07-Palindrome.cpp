#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of string";
    cin >> size;
    cin.ignore();

    char *A = new char[size];

    cout << "Enter the string is ";
    cin.getline(A, size);

    int i = 0, j = 0;
    for (i = 0; A[i] != '\0'; i++)
    {
    }

    i -= 1;
    bool isPalindrome = true;
    while (j < i)
    {
        if (A[i] != A[j])
        {
            isPalindrome = false;
            break;
        }
        j++;
        i--;
    }

    if (isPalindrome)
        cout << "It is a palindrome.";
    else
        cout << "It is not a palindrome.";

    delete[] A;

    return 0;
}