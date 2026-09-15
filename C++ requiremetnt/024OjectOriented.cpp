#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;

    public:

    void initialise(int l, int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    int l, b;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    r.initialise(l,b);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}