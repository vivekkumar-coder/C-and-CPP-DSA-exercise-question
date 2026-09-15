#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;

    public:
    Rectangle(){
       length = 0;
       breadth =0;
    }
    Rectangle(int l, int b){
        length = l;
        breadth =b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setLength(int l){
        length =l;
    }
    void setBreadth(int b){
        breadth =b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    ~Rectangle(){
        cout<<"Destructor";
    }
   
};

int main() {
    Rectangle r{89,85};
    cout<<r.area()<<endl<<r.perimeter()<<endl;
    r.setLength(20);
    r.setBreadth(50);
    cout<<r.getLength()<<endl<<r.getBreadth()<<endl;

    return 0;
}