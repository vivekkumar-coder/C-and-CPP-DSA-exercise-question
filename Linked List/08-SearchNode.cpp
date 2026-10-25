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
  while (p)
  {
    cout << p->data << "  ";
    p = p->next;
  }
}

void displayRecursive(Node *p)
{
  if (p)
  {
    cout << p->data << "  ";
    displayRecursive(p->next);
  }
}

void displayRecursiveReverse(Node *p)
{
  if (p)
  {
    displayRecursiveReverse(p->next);
    cout << p->data << endl;
  }
}

int countIterative(Node *p)
{
  int count = 0;
  while (p)
  {
    count++;
    p = p->next;
  }
  return count;
}

int countRecursive(Node *p)
{
  if (!p)
    return 0;
  return countRecursive(p->next) + 1;
}

int sumIterative(Node *p)
{
  int max = INT_MIN;
  while (p)
  {
    if (p->data > max)
      return max;
    p = p->next;
  }
  return max;
}

int sumRecursive(Node *p)
{
  if (!p)
    return 0;
  return sumRecursive(p->next) + p->data;
}

int maxIterative(Node *p)
{
  int max = INT_MIN;
  while (p)
  {
    if (max < p->data)
      max = p->data;
  }
  return max;
}

int maxRecursive(Node *p)
{
  int x = 0;
  if (!p)
    return INT_MIN;
  else
  {
    x = maxRecursive(p->next);
    if (x > p->data)
      return x;
    else
      return p->data;
  }
}

Node *searchIterative(Node *p, int key)
{
  while (p)
  {
    if (key == p->data)
      return p;
    p = p->next;
  }
  return nullptr;
}

Node *searchRecursive(Node *p, int key)
{
  if (p == nullptr)
    return nullptr;
  if (p->data == key)
    return p;
  return searchRecursive(p->next, key);
}

int main()
{
  int A[] = {10, 20, 40, 50, 60, 70, 80, 90};
  int sze = size(A);

  create(A, sze);

  cout << searchIterative(first, 30) << endl
       << searchIterative(first, 20) << endl
       << searchRecursive(first, 30) << endl
       << searchRecursive(first, 20) << endl;

  return 0;
}