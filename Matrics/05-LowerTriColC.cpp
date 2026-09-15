#include <stdio.h>
#include <cstdlib>

struct LowerMatrix
{
    int n;
    int *A;
};

void set(struct LowerMatrix *L, int i, int j, int x)
{
    if (i >= j)
        L->A[(j - 2) * (L->n - (j - 1) / 2) + i - j] = x;
}

int get(struct LowerMatrix L, int i, int j)
{
    if (i >= j)
        return L.A[(j - 2) * (L.n - (j - 1) / 2) + i - j];
    else
        return 0;
}

void display(struct LowerMatrix L)
{
    for (int i = 1; i <= L.n; i++)
    {
        for (int j = 1; j <= L.n; j++)
        {
            if (i >= j)
                printf("%d ", L.A[(j - 2) * (L.n - (j - 1) / 2) + i - j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct LowerMatrix L;

    printf("Enter the dimension : ");
    scanf("%d", &L.n);

    L.A = (int *)malloc((L.n * (L.n + 1) / 2) * sizeof(int));

    int x;
    for (int i = 1; i <= L.n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &x);
            set(&L, i, j, x);
        }
    }

    for (int i = 1; i <= L.n; i++)
    {
        for (int j = 1; j <= L.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", get(L, i, j));
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\n---- Display Function ------\n");
    display(L);
    return 0;
}