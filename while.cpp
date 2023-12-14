#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Take a Number: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}