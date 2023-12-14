/*
input:

5
-5 0 -3 -4 12

output:

Even: 3
Odd: 2
Positive: 1
Negative: 38
*/

#include <iostream>
using namespace std;
int main()
{
    long long int num;
    cin >> num;

    int even = 0, odd = 0, positive = 0, negetive = 0;

    for (int i = 1; i <= num; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 != 0)
        {
            odd++;
        }
        if (a < 0)
        {
            negetive++;
        }
        else if (a > 0)
        {
            positive++;
        }
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negetive << endl;

    return 0;
}