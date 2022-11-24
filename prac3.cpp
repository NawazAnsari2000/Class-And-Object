#include<iostream>
using namespace std;

class employee
{
    public:
    string name;
    int year;
    int salary;
    string adress;

    void info()
    {
        cout<<"name"<<endl;
        cin>>name;
        cout<<"year"<<endl;
        cin>>year;
        cout<<"adress"<<endl;
        cin>>adress;
        cout<<"salary"<<endl;
        cin>>salary;
    }
    void printinfo()
    {
        cout<<name<<'\t'<<year<<'\t'<<'\t'<<adress<<'\t'<<'\t'<<salary<<endl;
    }
    
};

int main(){
    employee emp1,emp2,emp3;
    cout<<"enter the employee info 1"<<endl;
    emp1.info();
    cout<<"enter the employee info 2"<<endl;
    emp2.info();
    cout<<"enter the employee info 3"<<endl;
    emp3.info();
    cout<<"\nNAME"<<'\t'<<"JOINING YEAR"<<'\t'<<"ADRESS"<<'\t'<<"\tSALARY"<<endl;
    emp1.printinfo();
    emp2.printinfo();
    emp3.printinfo();
return 0;
}