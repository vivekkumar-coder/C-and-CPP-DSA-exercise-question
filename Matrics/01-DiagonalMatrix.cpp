#include <iostream>
using namespace std;

class DiagonalMatrix
{
private:
    int n, *A;

public:
    DiagonalMatrix(int n);
    ~DiagonalMatrix();
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

DiagonalMatrix::DiagonalMatrix(int n)
{
    this->n = n;
    A = new int[n];
}

void DiagonalMatrix::set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}

int DiagonalMatrix::get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}

void DiagonalMatrix::display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << A[i - 1] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

DiagonalMatrix::~DiagonalMatrix()
{
    delete[] A;
}

int main()
{
    int A[] = {3, 7, 4, 9, 6};
    int size = sizeof(A) / sizeof(A[0]);
    DiagonalMatrix D(5);
    for (int i = 0; i < size; i++)
    {
        D.set(i, i, A[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << D.get(i, i) << " ";
    }
    cout << endl
         << "--- MATRIC -----" << endl;
    D.display();

    return 0;
}