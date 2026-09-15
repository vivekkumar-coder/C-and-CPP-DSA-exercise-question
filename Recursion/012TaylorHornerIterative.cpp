#include <iostream>
using namespace std;

double e(double x, double n)
{
    double sum = 1;
    if (n == 0)
        return sum;

    for (; n > 0; n--)
    {
        sum = 1 + x / n * sum;
    }
    return sum;
}
int main()
{
    cout << e(2, 10) << endl;
    return 0;
}