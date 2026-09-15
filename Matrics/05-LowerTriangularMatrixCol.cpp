#include <iostream>
using namespace std;

// Column wise

class LowerTriangularMatrix
{
private:
    int n;
    int *A;

public:
    LowerTriangularMatrix(int n);
    ~LowerTriangularMatrix();
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

LowerTriangularMatrix::LowerTriangularMatrix(int n)
{
    this->n = n;
    A = new int[n * (n + 1) / 2];
}

void LowerTriangularMatrix::set(int i, int j, int x)
{
    if (i >= j)
        A[(j - 2) * (n - (j - 1) / 2) + i - j] = x;
}

int LowerTriangularMatrix::get(int i, int j)
{
    if (i >= j)
        return A[(j - 2) * (n - (j - 1) / 2) + i - j];
    else
        return 0;
}

void LowerTriangularMatrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[(j - 2) * (n - (j - 1) / 2) + i - j] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

LowerTriangularMatrix::~LowerTriangularMatrix()
{
    delete[] A;
}

int main()
{
    int dimension;
    cout << "Enter the dimension : ";
    cin >> dimension;

    LowerTriangularMatrix L(dimension);

    int x;
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "Enter the element of ( " << i << ", " << j << ") : ";
            cin >> x;
            L.set(i, j, x);
        }
    }

    cout << endl
         << "--- GET FUNCTION ---" << endl;
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            if (i >= j)
            {
                cout << L.get(i, j) << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "--- DISPLAY FUNCTION ---" << endl;
    L.display();

    return 0;
}