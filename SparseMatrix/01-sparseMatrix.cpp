#include<iostream>
#include<stdlib.h>
using namespace std;

struct Element{
  int i;
  int j;
  int x;
};

struct Sparse{
  int m;
  int n;
  int num;
  struct Element *ele;
};

void create(struct Sparse *s){
  printf("Enter the dimension : ");
  scanf("%d%d", &s->m, &s->n);

  printf("Number of non-zero");
  scanf("%d", &s->num); 

  s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
  printf("Enter non-zero elements \n");

  for(int i=0;i<s->num;i++)
    scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
}

void display(struct Sparse s){
  int k=0;
  for(int i=0;i<s.m;i++){
    for(int j=0;j<s.n;j++){
      if(i==s.ele[k].i && j==s.ele[k].j && k<s.num)
        printf("%d ", s.ele[k++].x);
      else  printf("0 ");
    }
    printf("\n");
  }
}


int main() {

  struct Sparse s;
  create (&s);
  display(s);

  free(s.ele);
  return 0;
}