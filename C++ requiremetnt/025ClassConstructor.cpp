#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength(){
        return length;
    }
    void setLength(int l){
        length=l;
    }
    ~Rectangle();
};

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
Rectangle::~Rectangle(){

}

int main(){
    int l, b;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>l>>b;

    Rectangle r(l,b);
    cout<<r.area()<<endl<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<endl<<r.getLength();

    return 0;
}