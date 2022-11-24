//PARAMETERIZED CONSTRUCTOR:

#include<iostream>
using namespace std;

class A
{
     private:
     public:
     A(int a,int b)      //parameterize constructer:
     {
        cout<<a<<endl<<b;
     }
};

int main(){

    A obj=A(10,20);
    
return 0;
}