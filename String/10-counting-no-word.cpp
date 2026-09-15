#include <iostream>
using namespace std;

int main()
{
    char A[] = "    How are you rjksldaj    jdflkasdjf a fd s fjsa f?";
    int i, word = 1;
    for (i = 1; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
            word++;
    }
    cout << "number of word are " << word << endl;

    return 0;
}