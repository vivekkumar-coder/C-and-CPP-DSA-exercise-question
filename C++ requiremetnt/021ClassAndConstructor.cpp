/*
// Program in C language

#include<iostream>
using namespace std;

struct Rectangle
{
    int length,breadth;
};
void initialize(struct Rectangle *r, int l , int b){
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r){
    return r.length*r.breadth;
}
void changeLength(struct Rectangle *r,int l){
    r->length=l;
}
int main(){
    struct  Rectangle r;

    initialize(&r,10,5);
    cout<<area(r);
    changeLength(&r,20);

    return 0;
}

*/
// In C++

class Rectangle
{
private:
    int length;
    int breadth;

public:
    /*
    void intialize(int l, int b)
    {
        length = l;
        breadth = b;
    } 
    */

    // Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r(18,45);
    // r.intialize(10, 50);
    r.area();
    r.changeLength(20);

    return 0;
}