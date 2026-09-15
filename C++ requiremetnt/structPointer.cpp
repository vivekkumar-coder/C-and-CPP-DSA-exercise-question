#include<iostream>
using namespace std;

struct Rectangle{
    int length, breadth;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;

    struct REctangle *p5;

    cout<<sizeof(p1)<<endl
        <<sizeof(p2)<<endl
        <<sizeof(p3)<<endl
        <<sizeof(p4)<<endl
        <<sizeof(p5)<<endl;

    return 0;
}