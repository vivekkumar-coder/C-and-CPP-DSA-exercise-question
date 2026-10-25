#include <iostream>
using namespace std;

class Element
{
public:
  int i;
  int j;
  int x;
};

class Sparse
{
  int m;
  int n;
  int num;
  Element *ele;

public:
  Sparse(int m, int n, int num)
  {
    this->n = n;
    this->m = m;
    this->num = num;
    ele = new Element[this->num];
  }
  ~Sparse()
  {
    delete[] ele;
  }

  Sparse operator+(Sparse &s);

  friend istream &operator>>(istream &is, Sparse &s);
  friend ostream &operator<<(ostream &os, Sparse &s);
};

istream &operator>>(istream &is, Sparse &s)
{
  cout << "Enter non-zero elements : ";
  for (int i = 0; i < s.num; i++)
    cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
  return is;
}

ostream &operator<<(ostream &os, Sparse &s)
{
  int k = 0;
  for (int i = 0; i < s.m; i++)
  {
    for (int j = 0; j < s.n; j++)
    {
      if (s.ele[k].i == i && s.ele[k].j == j)
        cout << s.ele[k++].x << " ";
      else
        cout << "0 ";
    }
    cout << endl;
  }
}

int main()
{
  Sparse s1(5, 5, 5);
  cin >> s1;
  cout << s1;

  return 0;
}