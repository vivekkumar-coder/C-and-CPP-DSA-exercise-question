#include<iostream>
using namespace std;

class Arithmatic{
    private:
    int a,b;
    public:
    Arithmatic(int a, int b){
        this->a=a;
        this->b=b;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
};

int main(){
    Arithmatic a(12,4);
    cout<<a.add()<<endl<<a.sub();
    return 0;
}