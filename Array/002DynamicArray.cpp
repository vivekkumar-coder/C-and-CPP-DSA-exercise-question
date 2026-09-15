#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p, *q;
    int i;

    // p=(int *)malloc(5*sizeof(int)); // c lang
    p = new int(5); // c++
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // q=(int *)malloc(10*sizeof(int));  // C lang
    q = new int[10]; // c++

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // delete []p;  //C++
    free(p);
    p = q;
    q = NULL;
    for (int i = 0; i < 5; i++)
        printf("%d  ", p[i]);

    delete[] q;
    return 0;
}