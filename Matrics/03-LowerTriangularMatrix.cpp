#include <iostream>
using namespace std;

// Row wise
class LowerTriangularMatrix
{
private:
    int n;
    int dimension;
    int *A;

public:
    LowerTriangularMatrix(int n);
    ~LowerTriangularMatrix();
    void setMatrix(int i, int j, int x);
    int getMatrix(int i, int j);
    void display();
};

LowerTriangularMatrix::LowerTriangularMatrix(int n)
{
    this->n = n;
    this->dimension = n;
    A = new int[n * (n + 1) / 2];
}

void LowerTriangularMatrix::setMatrix(int i, int j, int x)
{
    if (i >= j)
        A[i * (i + 1) / 2 + j - 1] = x;
}

int LowerTriangularMatrix::getMatrix(int i, int j)
{
    if (i >= j)
        return A[i * (i + 1) / 2 + j - 2];
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
            {
                cout << A[i * (i + 1) / 2 + j - 1] << " ";
            }
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

    cout << "Enter Dimension : ";
    cin >> dimension;
    LowerTriangularMatrix L(dimension);

    int x;
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "Enter the element of ( " << i << ", " << j << " ) : ";
            cin >> x;
            L.setMatrix(i, j, x);
        }
    }

    cout << endl
         << "--- GET() USED FOR PRINTING ---" << endl;
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            if (i >= j)
            {
                cout << L.getMatrix(i, j) << " ";
            }
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    cout << endl
         << "--- DISPLAY() ---" << endl;
    L.display();

    return 0;
}