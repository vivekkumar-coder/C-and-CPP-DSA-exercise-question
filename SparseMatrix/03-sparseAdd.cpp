
#include <stdio.h>
#include <stdlib.h>

struct Element {
    int i;
    int j;
    int x;
};

struct Sparse {
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct Sparse *s) {
    printf("Enter the dimensions: ");
    scanf("%d%d", &s->m, &s->n);

    printf("Enter the number of non-zero elements: ");
    scanf("%d", &s->num);

    s->ele = (struct Element *)
        malloc(s->num * sizeof(struct Element));

    printf("Enter row, column and value in sorted order:\n");

    for (int i = 0; i < s->num; i++) {
        scanf("%d%d%d",
              &s->ele[i].i,
              &s->ele[i].j,
              &s->ele[i].x);
    }
}

void display(struct Sparse s) {
    int k = 0;

    for (int i = 0; i < s.m; i++) {
        for (int j = 0; j < s.n; j++) {
            if (k < s.num &&
                i == s.ele[k].i &&
                j == s.ele[k].j) {
                printf("%d ", s.ele[k].x);
                k++;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

struct Sparse *add(struct Sparse *s1, struct Sparse *s2) {
    if (s1->m != s2->m || s1->n != s2->n) {
        printf("Matrix dimensions do not match!\n");
        return NULL;
    }

    struct Sparse *sum;
    int i = 0, j = 0, k = 0;

    sum = (struct Sparse *)malloc(sizeof(struct Sparse));

    sum->ele = (struct Element *)
        malloc((s1->num + s2->num) * sizeof(struct Element));

    while (i < s1->num && j < s2->num) {
        if (s1->ele[i].i < s2->ele[j].i) {
            sum->ele[k++] = s1->ele[i++];
        }
        else if (s1->ele[i].i > s2->ele[j].i) {
            sum->ele[k++] = s2->ele[j++];
        }
        else {
            if (s1->ele[i].j < s2->ele[j].j) {
                sum->ele[k++] = s1->ele[i++];
            }
            else if (s1->ele[i].j > s2->ele[j].j) {
                sum->ele[k++] = s2->ele[j++];
            }
            else {
                int value = s1->ele[i].x + s2->ele[j].x;

                if (value != 0) {
                    sum->ele[k] = s1->ele[i];
                    sum->ele[k].x = value;
                    k++;
                }

                i++;
                j++;
            }
        }
    }

    while (i < s1->num) {
        sum->ele[k++] = s1->ele[i++];
    }

    while (j < s2->num) {
        sum->ele[k++] = s2->ele[j++];
    }

    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = k;

    return sum;
}

int main() {
    struct Sparse s1, s2;
    struct Sparse *s3;

    printf("Enter the first matrix:\n");
    create(&s1);

    printf("\nEnter the second matrix:\n");
    create(&s2);

    printf("\nFirst Matrix:\n");
    display(s1);

    printf("\nSecond Matrix:\n");
    display(s2);

    s3 = add(&s1, &s2);

    if (s3 != NULL) {
        printf("\nSum Matrix:\n");
        display(*s3);

        free(s3->ele);
        free(s3);
    }

    free(s1.ele);
    free(s2.ele);

    return 0;
}
