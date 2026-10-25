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
  // Sparse(int m, int n, int num) : m(m).n(n), ele(new Element[num]) {}

  Sparse(int m, int n, int num)
  {
    this->n = n;
    this->m = m;
    this->num = num;
    ele = new Element[num];
  }
  Sparse(const Sparse &s) : m(s.m), n(s.n), num(s.num), ele(new Element[s.num])
  {
    for (int k = 0; k < num; k++)
      ele[k] = s.ele[k];
  }

  ~Sparse()
  {
    delete[] ele;
  }

  Sparse operator+(const Sparse &s);

  friend istream &operator>>(istream &is, Sparse &s);
  friend ostream &operator<<(ostream &os, Sparse &s);
};

istream &operator>>(istream &is, Sparse &s)
{
  cout << "Enter non-zero elements \n";
  for (int i = 0; i < s.num; i++)
    is >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
  return is;
}

ostream &operator<<(ostream &os, Sparse &s)
{
  int k = 0;
  for (int i = 0; i < s.m; i++)
  {
    for (int j = 0; j < s.n; j++)
    {
      if (k < s.num && s.ele[k].i == i && s.ele[k].j == j)
        os << s.ele[k++].x << " ";
      else
        os << "0 ";
    }
    os << endl;
  }
  return os;
}

Sparse Sparse::operator+(const Sparse &s)
{
  int i, j, k;
  if (m != s.m || n != s.n)
    return Sparse(0, 0, 0);

  Sparse sum(m, n, num + s.num);
  i = j = k = 0;

  while (i < num && j < s.num)
  {
    if (ele[i].i < s.ele[j].i || (ele[i].i == s.ele[j].i && ele[i].j < s.ele[j].j))
      sum.ele[k++] = ele[i++];

    else if (ele[i].i > s.ele[j].i || (ele[i].i == s.ele[j].i && ele[i].j > s.ele[j].j))
      sum.ele[k++] = s.ele[j++];

    else
    {
      sum.ele[k] = ele[i];
      sum.ele[k++].x = ele[i++].x + s.ele[j++].x;
    }
  }
  while (i < num)
    sum.ele[k++] = ele[i++];
  while (j < s.num)
    sum.ele[k++] = s.ele[j++];

  sum.num = k;

  return sum;
}
int main()
{
  Sparse S1(5, 5, 5);
  Sparse S2(5, 5, 5);

  cout << "Enter the first matrix " << endl;
  cin >> S1;
  cout << "Enter the second matrix " << endl;
  cin >> S2;

  Sparse sum = S1 + S2;
  cout << "First Matrix : " << endl
       << S1
       << endl
       << "Second Matrix " << endl
       << S2 << endl
       << "Sum : " << endl
       << sum << endl;

  return 0;
}