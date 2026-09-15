#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(Array arr){
    cout << "Elements are\n";
    for(int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

int main()
{
    Array arr;
    int n;

    cout << "Enter the size of array: ";
    cin >> arr.size;

    arr.A = new int[arr.size];  // C++ way instead of malloc
    arr.length = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter all Elements\n";
    for(int i = 0; i < n; i++)
        cin >> arr.A[i];

    arr.length = n;

    Display(arr);

    delete[] arr.A;  // free memory (important)

    return 0;
}