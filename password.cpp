#include <iostream>
using namespace std;
int main()
{
    int pass;

    while (1)
    {

        cin >> pass;

        /// 1999 is the correct password
        if (pass == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}