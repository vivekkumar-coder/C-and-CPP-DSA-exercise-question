#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *first = nullptr;

void create(int A[], int size)
{
  if (size <= 0)
    return;

  Node *t, *last;

  first = new Node;
  first->data = A[0];
  first->next = nullptr;
  last = first;

  for (int i = 1; i < size; i++)
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
  if (p != nullptr)
  {
    cout << p->data << " ";
    display(p->next);
  }
}

void displayReverse(Node *p)
{
  if (p != nullptr)
  {
    displayReverse(p->next);
    cout << p->data << " ";
  }
}

int main()
{
  int A[] = {10, 32, 54, 65, 34, 76, 87, 879};
  int size = sizeof(A) / sizeof(A[0]);

  create(A, size);
  display(first);
  cout << endl;
  displayReverse(first);

  return 0;
}