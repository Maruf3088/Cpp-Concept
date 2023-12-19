#include <iostream>
using namespace std;

void founding(int a[], int x, int y)
{
    int i;
    int flag = 0;
    for (i = 0; i < x; i++)
    {
        if (a[i] == y)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "The " << y << " is found!!" << endl;
        cout << "The index is " << i + 1 << endl;
    }
    else if (flag == 0)
    {
        cout << "The " << y << " is not found!!" << endl;
    }
}

int main()
{
    int a[40];
    int n;
    cout << endl
         << endl
         << "The maximum size of array can be 40!! so, take size in this range (0<=size<=40)!!" << endl
         << endl;

    cout << "Size of Array : ";
    cin >> n;

    cout << endl
         << "Take " << n << " Number below :" << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl
         << "Which number do you want to find :";
    int x;
    cin >> x;

    founding(a, n, x);
}
