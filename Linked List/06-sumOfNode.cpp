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
    displayIterative(p->next);
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
    cout << p->data << "  ";
  }
}

int count(Node *p)
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

int sumRecursive(Node *p)
{
  if (!p)
    return 0;
  return sumRecursive(p->next) + p->data;
}

int main()
{
  int A[] = {10, 20, 30, 40, 50, 60};
  int sze = size(A);
  create(A, sze);

  cout << count(first) << endl
       << countRecursive(first) << endl;

  cout << sumIterative(first) << endl
       << sumRecursive(first) << endl;

  return 0;
}