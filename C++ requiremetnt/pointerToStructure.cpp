#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){
    struct Rectangle r={10,5};
    struct Rectangle *p = &r;

    r.length=15;
    (*p).length=20;

    cout<<sizeof(p)<<endl
        <<p->length<<endl
        <<p->breadth<<endl;


    struct Rectangle *p1;
    p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1=new Rectangle;
    p1->length=10;
    p1->breadth=65;

    cout<<p1->length<<endl
        <<p1->breadth<<endl;




    return 0;
}


