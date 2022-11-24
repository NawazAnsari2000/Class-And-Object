#include<iostream>
using namespace std;

class person
{
    private:
    int run;
    string str;

    public:
    void show()
    {
        run=50;
        cout<<"today i scored "<<run<<"run"<<endl;
        
    }
    void msg()
    {
        str="today i walked 3 kilometer";
        cout<<str;
    }
};

int main(){
    person object;
    object.show();
    object.msg();
return 0;
}