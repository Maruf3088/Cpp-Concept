#include <iostream>
using namespace std;

class student
{
    /// declare some variable in class:
public:
    char name[100];
    char id[100];
    float cgpa;

    /// function (without perameter) in class:
    void display()
    {
        cout << name << " " << id << " " << cgpa << endl;
    }
};

int main()
{
    student maruf;
    cout << "Name : ";
    cin >> maruf.name;
    cout << "ID : ";
    cin >> maruf.id;
    cout << "CGPA : ";
    cin >> maruf.cgpa;

    /// output by calling function:
    maruf.display();
    return 0;
}