#include <iostream>
using namespace std;

int valid(string name)
{
    int i = 0;
    for (; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}

int main()
{
    string name;
    cout << "Enter a string is ";
    getline(cin, name);

    if (valid(name))
    {
        cout << "valid String " << endl;
    }
    else
    {
        cout << "Invalid String " << endl;
    }
    return 0;
}