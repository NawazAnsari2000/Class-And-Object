#include<iostream>
using namespace std;

class student
{
    public:
    int rollno;
    string name;

};

int main(){
    student obj;
    obj.rollno=2;
    obj.name="nawaz";
    cout<<"name = "<<obj.name<<endl<<"roll no. = "<<obj.rollno;
return 0;
}