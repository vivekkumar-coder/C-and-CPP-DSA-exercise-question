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

void displayIterative(Node *p)
{
  while (p != nullptr)
  {
    cout << p->data << "  ";
    p = p->next;
  }
}

void displayRecursive(Node *p)
{
  if (p != nullptr)
  {
    cout << p->data << "  ";
    displayRecursive(p->next);
  }
}

void displayRecursiveReverse(Node *p)
{
  if (p != nullptr)
  {
    displayRecursiveReverse(p->next);
    cout << p->data << "  ";
  }
}

int countIterative(Node *p)
{
  int count = 0;
  while (p != nullptr)
  {
    count++;
    p = p->next;
  }
  return count;
}

int countNodeRecursive(Node *p)
{
  if (p == nullptr)
    return 0;
  return 1 + countNodeRecursive(p->next);
}

int countNodeRecursive1(Node *p)
{
  if (p == nullptr)
    return 0;
  return countNodeRecursive1(p->next) + 1;
}

int countNodeRecursive2(Node *p)
{
  if (p != nullptr)
    return 1 + countNodeRecursive2(p->next);
  return 0;
}

int countNodeRecursive3(Node *p)
{
  int x = 0;
  if (p)
  {
    x = countNodeRecursive3(p->next);
    return x + 1;
  }
  else
    return x;
}

int main()
{

  int A[] = {10, 20, 30, 40, 50, 60};
  int sze = size(A);
  create(A, sze);
  displayIterative(first);
  cout << endl;
  displayRecursive(first);
  cout << endl;
  displayRecursiveReverse(first);
  cout << endl;

  cout << countIterative(first) << endl
       << countNodeRecursive(first) << endl
       << countNodeRecursive1(first) << endl
       << countNodeRecursive2(first) << endl
       << countNodeRecursive3(first) << endl;

  return 0;
}