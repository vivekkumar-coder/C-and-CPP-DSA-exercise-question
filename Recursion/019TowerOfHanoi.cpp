#include <iostream>
using namespace std;

void towerOfHanoi1(int n, int A, int B, int C)
{
    if (n > 0)
    {
        towerOfHanoi1(n - 1, A, C, B);
        cout << "from " << A << " to " << C << endl;
        towerOfHanoi1(n - 1, B, A, C);
    }
}

void towerOfHanoi2(int n, char A, char B, char C)
{
    if (n > 0)
    {
        towerOfHanoi2(n - 1, A, C, B);
        cout << "from " << A << " to " << C << endl;
        towerOfHanoi2(n - 1, B, A, C);
    }
}

int main()
{
    towerOfHanoi1(3, 1, 2, 3);
    cout << endl;
    towerOfHanoi2(3, 'A', 'B', 'C');

    return 0;
}