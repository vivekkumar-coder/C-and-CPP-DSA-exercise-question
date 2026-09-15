#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter the any string are ";
    cin >> name; // reading from keyboard
    int j = 0;
    for (; name[j] != '\0'; j++)
    {
    }
    cout << "\nLength of string " << name << " is " << j << endl;

    char A[] = {'w', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    cout << "Length of welcome of string is " << i << endl;

    return 0;
}