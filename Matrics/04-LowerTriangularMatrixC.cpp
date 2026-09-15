#include <stdio.h>
#include <cstdlib>

// Row major order

struct Matrix
{
    int *A;
    int n;
};

void set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
        m->A[i * (i - 1) / 2 + j - 1] = x;
}

int get(struct Matrix *m, int i, int j)
{
    if (i >= j)
        return m->A[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void display(struct Matrix m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
                printf("%d ", m.A[i * (i - 1) / 2 + j - 1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    printf("Enter the Dimension : ");
    scanf("%d", &m.n);

    m.A = (int *)malloc((m.n * (m.n + 1) / 2) * sizeof(int));

    int x;
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }

    // int values[] = {10, 20, 30, 10, 20, 30, 10, 20, 30, 40, 10, 20, 30, 40, 50};

    // for (int i = 0; i < m.n * (m.n + 1) / 2; i++)
    // {
    //     m.A[i] = values[i];
    // }

    // int k = 0;
    // for (int i = 0; i < m.n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //         set(&m, i, j, m.A[k++]);
    // }

    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", get(&m, i, j));
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\n---- Display Function ------\n");
    display(m);

    return 0;
}