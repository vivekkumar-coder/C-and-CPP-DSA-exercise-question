#include <iostream>
using namespace std;

// Complex Number
struct Complex
{
    int real, img;
};

// Student
struct Student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

int main()
{
    // initialisation and Declaration of complex number
    struct Complex c;
    cout << "Complex Number is " << c.real << " + i" << c.img << endl;

    // initialisation and Declaration of Student struct
    struct Student s1, s2;
    s1.roll = 15;
    s1.name = "dhfa";
    s1.dept = "ME";
    s1.address = "Home";
    cout << s1.name;
}