#include<iostream>
using namespace std;

class cons 
    {
        int num1;
        int num2;

        public:

        cons(int a,int b)

        {
            num1=a;
            num2=b;
            

        }
        void display()
        {
            cout<<num1+num2;
        }
    };

int main(){
    cons ob(5,6);
    ob.display();
    
return 0;
}

