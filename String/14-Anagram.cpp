#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    cout << "Enter the string A : ";
    getline(cin, A);
    cout << "Enter the string B : ";
    getline(cin, B);

    int H[26] = {0};

    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            H[A[i] - 65]++;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            H[A[i] - 97]++;
        }
    }

    for (int i = 0; B[i] != '\0'; i++)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            H[A[i] - 65]--;
        }
        else if (A[i] >= 'a' && A[i] <= 'z')
        {
            H[A[i] - 97]--;
        }
    }

    bool isAnagram = true;

    for (int i = 0; i < 26; i++)
    {
        if (H[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "it is Anagram.";
    else
        cout << "not Anagram.";

    return 0;
}