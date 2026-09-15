#include <stdio.h>
using namespace std;

struct Matrix
{
    int A[100];
    int n;
};

void set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i] = x;
}

int get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i];
    else
        return 0;
}

void display(struct Matrix m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("%d ", m.A[i]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    m.n = 5;
    int arr[] = {2, 7, 4, 9, 6};
    for (int i = 0; i < m.n; i++)
        m.A[i] = arr[i];

    for (int i = 0; i < m.n; i++)
    {
        set(&m, i, i, m.A[i]);
    }
    for (int i = 0; i < m.n; i++)
    {
        printf("%d", get(m, i, i), " ");
    }
    printf("\n", "--- MATRIC -----", "\n");
    display(m);
}