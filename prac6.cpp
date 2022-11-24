#include<iostream>
using namespace std;

class area
{
    public:
    int length;
    int width;
    area(int l,int w)
    {
        length=l;
        width=w;
    }
    int returnArea()
    {
        return length*width;
    }
};

int main(){
    area obj(10,20);
    cout<<obj.returnArea();
return 0;
}