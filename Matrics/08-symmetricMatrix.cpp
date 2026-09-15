#include <iostream>
using namespace std;

class SymmetricMatrix
{
private:
    int n, *rowA, *colA;

public:
    SymmetricMatrix(int n);
    ~SymmetricMatrix();
    void create();
    void setRow(int i, int j, int x);
    int getRow(int i, int j);
    void setCol(int i, int j, int x);
    int getCol(int i, int j);
    void display(bool row = true);
};

SymmetricMatrix::SymmetricMatrix(int n)
{
    this->n = n;
    rowA = new int[n * (n + 1) / 2];
    colA = new int[n * (n + 1) / 2];
}

SymmetricMatrix::~SymmetricMatrix()
{
    delete[] rowA;
    delete[] colA;
}

void SymmetricMatrix::create()
{
    int x;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "element at ( " << i << ", " << j << ") : ";
            cin >> x;
            setCol(i, j, x);
            setRow(i, j, x);
        }
    }
}

void SymmetricMatrix::setRow(int i, int j, int x)
{
    if (i <= j)
        rowA[(i - 1) * n - ((i - 2) * (i - 1)) / 2 + j - i] = x;
}

int SymmetricMatrix::getRow(int i, int j)
{
    if (i <= j)
        return rowA[(i - 1) * n - ((i - 2) * (i - 1)) / 2 + j - i];
    else
        return 0;
}

void SymmetricMatrix::setCol(int i, int j, int x)
{
    if (i <= j)
        colA[j * (j - 1) / 2 + i - 1] = x;
}

int SymmetricMatrix::getCol(int i, int j)
{
    if (i <= j)
        return colA[j * (j - 1) / 2 + i - 1];
    return 0;
}

void SymmetricMatrix::display(bool row)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
                //     cout << 0 << " ";
                // else if (row)
                cout << getRow(i, j) << " ";
            else
                cout << getCol(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int dimension;
    cout << "Enter the dimension is ";
    cin >> dimension;

    SymmetricMatrix M(dimension);

    M.create();

    cout << endl
         << " --- Display Row ---" << endl;
    M.display(true);

    cout << endl
         << " --- Display Column ---" << endl;
    M.display(false);
    return 0;
}