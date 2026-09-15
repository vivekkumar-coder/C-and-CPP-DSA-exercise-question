#include <iostream>
using namespace std;

string upperCase(string &x)
{
    int i = 0;
    for (; x[i] != '\0'; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
            x[i] -= 32;
    }
    return x;
}

string lowerCase(string &x)
{
    int i = 0;
    for (; x[i] != '\0'; i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
            x[i] += 32;
    }
    return x;
}

string toggleCase(string &x)
{
    int i = 0;
    for (; x[i] != '\0'; i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
            x[i] += 32;
        else if (x[i] >= 'a' && x[i] <= 'z')
            x[i] -= 32;
    }
    return x;
}

int main()
{
    string name;
    cout << "Enter a string is ";
    getline(cin, name);
    cout << "Upper Case : " << upperCase(name) << endl
         << "Lower Case : " << lowerCase(name) << endl
         << "Toggle Case : " << toggleCase(name) << endl;
    return 0;
}