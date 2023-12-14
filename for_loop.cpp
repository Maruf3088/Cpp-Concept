#include <iostream>
#include <cmath>
using namespace std;
int main()
/// check a number prime or not:
{
    // input:
    int num;
    cout << "Take a number:";
    cin >> num;
    int flag = 0;

    if (num == 1)
    {
        cout << "Not a Prime Number!";
    }
    else
    {

        for (int i = 2; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Prime Number!";
        }
        else if (flag == 1)
        {
            cout << "Not Prime Number!";
        }
    }

    return 0;
}