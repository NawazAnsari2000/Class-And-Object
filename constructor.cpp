//default constructer

#include<iostream>
using namespace std;

class A
{
    private:
    int a,b;

    public:
    A()      //default contructer:
    {
        a=10;
        b=20;
        cout<<a<<endl<<b<<endl;

    }
};

int main(){

    A obj=A();    //initialize the object:
    
return 0;
}