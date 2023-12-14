#include <iostream>
using namespace std;

class box
{
public:
    double length;
    double breadth;
    double height;

    /// Declare a constructor (with perameter):
    box(double x, double y, double z)
    {
        length = x;
        breadth = y;
        height = z;
    }

    /// declare a constructor(default):
    box()
    {
        cout << "Default Constructor" << endl;
    }

    /// Display Function:
    void display()
    {
        cout << "Volume : " << length * breadth * height << endl;
    }
};

int main()
{
    /// declare length, breadth ,height with constructor:
    box box1(5.0, 6.0, 7.0);
    box box2(10.0, 12.0, 13.0);

    /// declare a veriable for default constructor
    box box3;

    /// call display function :
    box1.display();
    box2.display();
    return 0;
}