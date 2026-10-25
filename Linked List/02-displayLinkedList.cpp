#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
  int data;
  struct Node *next;
} *first;

void create(int A[], int size)
{
  if (size <= 0)
    return;

  struct Node *t, *last;

  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (int i = 0; i < size; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void display(struct Node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main()
{
  int A[]{10, 30, 59, 394, 2934, 234234, 3543245};

  create(A, sizeof(A) / sizeof(A[0]));
  display(first);

  return 0;
}