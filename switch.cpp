#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char ch;
    cout << "Take Two Numbers : ";
    cin >> a >> b;

    cout << "Take an Operator (+,-,*,/): ";
    cin >> ch;

    cout << "Answer :";

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "You took wrong operator!!Try valid one!!";
    }

    return 0;
}