#include <iostream>
using namespace std;

void swap(char &x, char &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void permutation(char s[], int l, int h)
{
    // int i;
    if (l == h)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            permutation(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    char s[10] = "ABC";
    permutation(s, 0, 2);
    return 0;
}