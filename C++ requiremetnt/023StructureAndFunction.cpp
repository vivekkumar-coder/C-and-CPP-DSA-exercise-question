#include<iostream>
using namespace std;

struct Rectangle{
    int length,breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r)
{
    int a;
    a=r.length*r.breadth;
    return a;
}

int perimeter(struct Rectangle r){
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main(){
    Rectangle r={0,0};
    int l,b;

    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;

    initialize(&r,l,b);

    int a,p;
    a=area(r);
    p=perimeter(r);

    cout<<"Area = "<<a<<"\nPerimeter = "<<p;


    return 0;
}