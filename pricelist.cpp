#include <iostream>
using namespace std;

class item
{
    int price[50];
    int code[50];

public:
    void put()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "item no " << i + 1 << endl;
            cout << "enter item code" << endl;
            cin >> code[i];
            cout << "enter price" << endl;
            cin >> price[i];
        }
    }
    int maximum()
    {
        int max = price[0];
        for (int i = 0; i < 3; i++)
        {
            if (price[i] > max)
            {
                max = price[i];
            }
        }
        return max;
    }
    int totalall()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + price[i];
        }
        return sum;
    }
    void display()
    {
        cout << "item list..." << endl
             << endl;
        cout << "code  price" << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << code[i];
            cout << "  " << price[i];
            cout << endl;
        }
    }
};

int main()
{
    int largest, total;
    int choice = 0;
    item obj;
    obj.put();

    do
    {

        cout << "\nmain menu" << endl;
        cout << "1.maximum price.." << endl;
        cout << "2.total price.." << endl;
        cout << "3.list of all item.." << endl;

        cout << "enter your choice.." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            largest = obj.maximum();
            cout << "largest price = " << largest << endl;
            break;

        case 2:
            total = obj.totalall();
            cout << "total = " << total << endl;
            break;

        case 3:

            cout << "list of all item.." << endl;
            obj.display();
            break;

        default:
            cout << "invalid statement";
            break;
        }

    } while (choice >= 1 && choice <= 3);

    return 0;
}
