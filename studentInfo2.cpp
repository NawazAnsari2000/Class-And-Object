#include <iostream>
using namespace std;

int i = 0;
int j = 0;

class student
{
public:
    string name;
    string motherN;
    string fatherN;
    string address;
    int rollno;
    int id;

    void dataId()
    {
        cout << "\nenter the " << ++i << " std. info" << endl
             << endl;
        cout << "enter the  name:" << endl;
        cin >> name;
        cout << "enter the rollno:" << endl;
        cin >> rollno;
        cout << "enter the id:" << endl;
        cin >> id;
        cout << "enter the father name id:" << endl;
        cin >> fatherN;
        cout << "enter the mother name id:" << endl;
        cin >> motherN;
        cout << "enter the address id:" << endl;
        cin >> address;
    }

    void display()
    {
        cout << "\nthe info of " << ++j << " student..." << endl
             << endl;
        cout << "name = " << name << endl;
        cout << "rollno = " << rollno << endl;
        cout << "father name = " << fatherN << endl;
        cout << "mother name = " << motherN << endl;
        cout << "address = " << address << endl;
    }
};

int main()
{
    int size;
    int length = 0;
    cout << "how many std. data you put " << endl;
    cin >> size;

    student s[size];
    for (int i = 0; i < size; i++)
    {
        s[i].dataId();
    }

    cout << "\nALL STUDENT DATA ARE GIVEN BELLOW...." << endl;

    for (int j = 0; j < size; j++)
    {
        s[j].display();
    }

    return 0;
}