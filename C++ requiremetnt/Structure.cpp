#include<iostream>
using namespace std;

struct Rectangle{
    int length,breadth;
};

int main(){
    // Decalaration
    struct Rectangle R;  
    
    // decarlation and initialisation
    struct Rectangle r={10,5};

    // struct is access by the dot operator
    r.length =15;
    r.breadth=10;

    cout<<"Area is "<< r.length*r.breadth << endl;
    printf("Area of Rectangle is %d",r.length*r.breadth);
    
    return 0;
}