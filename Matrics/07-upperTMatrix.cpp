#include <iostream>
using namespace std;

class UTMatrix
{
private:
    int n;
    int *rowA, *colA;

public:
    UTMatrix(int n);
    ~UTMatrix();
    void setRow(int i, int j, int x);
    int getRow(int i, int j);
    void setCol(int i, int j, int x);
    int getCol(int i, int j);
    void display(bool row = true);
};

UTMatrix::UTMatrix(int n)
{
    this->n = n;
    rowA = new int[n * (n + 1) / 2];
    colA = new int[n * (n + 1) / 2];
}

UTMatrix::~UTMatrix()
{
    delete[] rowA;
    delete[] colA;
}

void UTMatrix::setRow(int i, int j, int x)
{
    if (i <= j)
    {
        rowA[n * (i - 1) - ((i - 2) * (i - 1)) / 2 + (j - i)] = x;
    }
}

int UTMatrix::getRow(int i, int j)
{
    if (i <= j)
    {
        return rowA[n * (i - 1) - ((i - 2) * (i - 1)) / 2 + (j - i)];
    }
    return 0;
}

void UTMatrix::setCol(int i, int j, int x)
{
    if (i <= j)
    {
        colA[j * (j - 1) / 2 + i - 1] = x;
    }
}

int UTMatrix::getCol(int i, int j)
{
    if (i <= j)
    {
        return colA[j * (j - 1) / 2 + i - 1];
    }
    return 0;
}

void UTMatrix::display(bool row)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j)
                cout << 0 << " ";
            else if (row)
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

    UTMatrix M(dimension);

    int x;
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = i; j <= dimension; j++)
        {
            cout << "element at ( " << i << ", " << j << ") : ";
            cin >> x;
            M.setRow(i, j, x);
            M.setCol(i, j, x);
        }
    }

    cout << endl
         << " --- Display Row ---" << endl;
    M.display(true);

    cout << endl
         << " --- Display Column ---" << endl;
    M.display(false);

    return 0;
}