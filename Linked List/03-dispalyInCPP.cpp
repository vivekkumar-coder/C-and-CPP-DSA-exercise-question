#include <iostream>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

struct Node
{
  int data;
  Node *next;
};

Node *first = nullptr;

void create(int A[], int size)
{
  Node *t, *last;

  first = new Node;
  first->data = A[0];
  first->next = nullptr;
  last = first;

  for (int i = 0; i < size; i++)
  {
    t = new Node;
    t->data = A[i];
    t->next = nullptr;

    last->next = t;
    last = t;
  }
}

void display(Node *p)
{
  while (p != nullptr)
  {
    cout << p->data << endl;
    p = p->next;
  }
}

int main()
{
  int A[] = {10, 30, 59, 394, 2934, 234234, 3543245};
  int size = sizeof(A) / sizeof(A[0]);

  create(A, size);
  display(first);

  return 0;
}