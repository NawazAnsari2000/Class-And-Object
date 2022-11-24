//DISTRUCTOR ARE ALSO SPACIAL TYTPE OF MEMBER FUNCTION THAT IS USE TO DEALLOCATED THE  MEMORY,ALLOCATED BY THE CONSTRUCTER :

#include<iostream>
using namespace std;

int count=0;

class A
{
    private:
    public:
    A()
    {
        cout<<"memory allocated "<<++count<<endl;
    }
    ~A() //destructer function member:
    {
        cout<<"memory deallocated "<<count--<<endl;
    }

};

int main(){

    A obj,obj2,obj3;
    
return 0;
}