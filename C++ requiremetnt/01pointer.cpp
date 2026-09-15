/* Pointer
   it is used for accessing resource which are outside the program
    it is used for accessing data which are present in heap
    it store address of data which are in heap

    uses of pointer
    1. Accessing Heap memory
    2. Accessing Resource which are in Heap memory
    3. Parameter passing
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    // data variable 
    int a=10;
    // address variable
    int *p;

    // initialisation of pointer variable
    p=&a; // p occupy address of a

    cout<<p<<endl
        <<&a<<endl
        <<*p<<endl;

        

    int *j;
    j=(int *)malloc(5*sizeof(int));
    j=new int[5];


    int arr[5]={2,4,6,8,10};
    int *arrPointer;
    arrPointer=arr;
    for(int x=0;x<5;x++){
        cout<<arrPointer[x]<<endl;
    }


    // use of malloc function
    int *m;
    m=(int *)malloc(5*sizeof(int));
    // m=new int[5];
m[0]=10; m[1]=12;m[2]=23;m[3]=24;m[4]=90;
    for(int i=0;i<5;i++){
cout<<m[i]<<endl;

    }
    delete p;
    free(p);
    free(m);
    free(j);
    delete[]m;
    delete j;
    return 0;
}