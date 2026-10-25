#include <iostream>
// #include <climits>

using namespace std;

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
    cout << p->data << endl;
    p = p->next;
  }
}

void displayRecursive(Node *p)
{
  if (p)
  {
    cout << p->data << endl;
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
  int sum = 0;
  while (p)
  {
    sum += p->data;
    p = p->next;
  }
  return sum;
}

int sumRecursion(Node *p)
{
  if (!p)
    return 0;
  return sumRecursion(p->next) + p->data;
}

int maxIterative(Node *p)
{
  int max = INT_MIN;
  while (p)
  {
    if (max < p->data)
      max = p->data;
    p = p->next;
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

int maxRecursive1(Node *p)
{
  int x = 0;
  if (p == 0)
    return INT_MIN;
  x = maxRecursive1(p->next);
  return (x > p->data) ? x : p->data;
}

int main()
{
  int A[] = {10, 340, 5465, 353, 546};
  int sze = size(A);
  create(A, sze);

  cout << maxIterative(first) << endl
       << maxRecursive(first) << endl
       << maxRecursive1(first) << endl;

  return 0;
}