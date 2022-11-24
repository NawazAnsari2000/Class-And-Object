#include<iostream>
using namespace std;

class rectangle
{
    public:
     int length,width,a;
    int a;

    int area(int length,int width)
    {
        
        cout<<"enter the length"<<endl;
        cin>>length;
        cout<<"enter the width"<<endl;
        cin>>width;
        a=length*width;
        return a;

    }
    void print()
    {
         
        cout<<"area = "<<a<<endl;
    }
};


int main(){
    
    rectangle ob1,ob2;
    int x=ob1.area(5,4);
    cout<<x<<endl;
    int y=ob2.area(9,4);
    cout<<y;
     ob1.print();
return 0;
}