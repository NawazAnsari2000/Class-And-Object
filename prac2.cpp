#include<iostream>
using namespace std;

class student
{
    public:
    int rollno,phone;
    string name,adress;

    void info()
        {
            cin>>name;
            cin>>adress;
            cin>>rollno;
            cin>>phone;
        }
    
    void print()
    {
        cout<<"name = "<<name<<endl;
        cout<<"adress = "<<adress<<endl;
        cout<<"rollno = "<<rollno<<endl;
        cout<<"phone = "<<phone<<endl;
    }

};

int main(){
    student std1,std2;
    cout<<"enter the first student info"<<endl;
    std1.info();
    cout<<"enter the sccond student info"<<endl;
    std2.info();
    cout<<"first student info is.."<<endl<<endl;
    std1.print();
    cout<<"second student info is.."<<endl<<endl;
    std2.print();

    

return 0;
}