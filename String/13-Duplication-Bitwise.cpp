#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of string : ";
    cin >> size;
    cin.ignore();

    char *C = new char[size + 1];
    cout << "Enter the string is ";
    cin.getline(C, size + 1);

    int h = 0;

    for (int i = 0; C[i] != '\0'; i++)
    {
        int x = 1;
        x = x << (C[i] - 97);
        if ((x & h) > 0) // x=x&h masking
            cout << C[i] << " is duplicate ";
        else
            h = x | h; // h=x|h merging
    }

    delete[] C;

    return 0;
}