#include <iostream>
using namespace std;

double e(int x, int n)
{
    double sum = 1, numerator = 1, den = 1;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            numerator *= x;
            den *= i;
            sum += numerator / den;
        }
        return sum;
    }
}

int main()
{
    cout << e(1, 10) << endl;
    return 0;
}