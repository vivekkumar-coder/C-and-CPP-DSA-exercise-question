#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public :
    Rectangle();
    Rectangle(int l, int b);
    int area();
    int perimeter();
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    ~Rectangle();
};

Rectangle::Rectangle(){
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
void Rectangle::setLength(int l){
    length=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}
Rectangle::~Rectangle(){
}

int main(){
    Rectangle r{10, 20};
    cout<<r.area()<<endl<<r.perimeter()<<endl;
    r.setBreadth(90);
    r.setLength(100);
    cout<<r.getLength()<<endl<<r.getBreadth();
    return 0;
}
