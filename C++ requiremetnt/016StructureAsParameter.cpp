#include<iostream>
using namespace std;

struct Rectangle
{
    int length,breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=10;

    return p;
}

// call by value
int area(struct Rectangle r1){
    r1.length++;
   return r1.length*r1.breadth;
}

// Call by reference 
int area1(struct Rectangle &r1){
  
   return r1.length*r1.breadth;
}

// Call by address
void changeLength(struct Rectangle *p, int l){
    p->length=l;
}

struct Test{
    int A[5], n;
};

void fun5(struct Test t1){
    t1.A[0]=10;
    t1.A[1]=20;
    
}

int main(){
    struct Rectangle r={10,5};
    printf("%d\n",area(r));
    printf("%d\n",area1(r));
   
    changeLength(&r,20);


    struct Test t={(2,3,4,5,45),5};
    fun5(t);

    struct  Rectangle *ptr=fun();
    cout<<"Length : "<<ptr->length<<endl
    <<"Breadth : "<<ptr->breadth<<endl;

    return 0;
}