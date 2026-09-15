#include<iostream>
using namespace std;

struct Card{
    int face, shape, color;
};

// In struct padding of memory is done
// struct ABC{
//  int a;
//  int b;
//  char c;
// } a1;
//  here the length of struct is 4
// it mean sizeof(a1) is 12 but char pick 4 byte but use only 1 byte;

int main(){
    // struct Card c;
    // c.face=1;
    // c.shape=0;
    // c.color=0; 

    struct Card deck[52]={{1,0,0},{2,0,0},{2,1,0}};
    printf("%d\n",deck[0].face);
    printf("%d\n",deck[0].shape);
    printf("%d\n",deck[0].color);
    printf("%d\n",sizeof(deck));


    return 0;
}