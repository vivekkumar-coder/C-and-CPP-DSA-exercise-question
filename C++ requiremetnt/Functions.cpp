#include<iostream>
using namespace std;

/*
Functions
1.What are Functions
Grouping data is called struct.
Grouping of instruction is called function.
It is also known  as module or procedure.

2.Parameter Passing
    a.Pass by value
    b.Pass by Address
    c.Pass by Raference
*/

int add(int a,int b)  // Prototype of function
{
    int c;
    c=a+b;
    return c;
}

int main(){
    int x, y, z;
    x=10;
    y=5;
    z=add(x,y);

    printf("Sum is %d",z);

    return 0;
}