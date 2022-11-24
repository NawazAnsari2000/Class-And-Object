#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    void first(int a, int b)
    {
        x = a;
        y = b;
    }

    void sum(complex o1, complex o2)
    {
        x = o1.x + o2.x;
        y = o2.y + o2.y;
    }
    void print()
    {
        cout << x << "+i" << y << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.first(2, 3);
    c1.print();
    c2.first(4, 6);
    c2.print();

    c3.sum(c1, c2);
    c3.print();

    return 0;
}