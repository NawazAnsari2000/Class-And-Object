#include<iostream>
using namespace std;

class area
{
    public:
    int length;
    int breadth;

    void setDim(int l,int b)
    {
        breadth=b;
        length =l;
    }
    int get()
    {
        return breadth*length;

    }
};

int main(){
    area a;
    a.setDim(5,4);
    cout<<a.get();
return 0;
}