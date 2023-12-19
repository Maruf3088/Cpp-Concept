#include <iostream>
using namespace std;

void sorting(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void binary_search(int arr[], int left, int right, int item)
{
    int flag = 0;

    while (left <= right)
    {
        int middle_index = left + (right - left) / 2;

        if (arr[middle_index] == item)
        {
            cout << item << " is found!!" << endl
                 << " and the index is " << middle_index << endl;
            flag = 1;
            break; // You found the item, so no need to continue searching
        }
        else if (arr[middle_index] < item)
        {
            left = middle_index + 1;
        }
        else if (arr[middle_index] > item)
        {
            right = middle_index - 1;
        }
    }

    if (flag == 0)
    {
        cout << item << " is not found!!" << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Write " << size << " numbers below: " << endl;

    for (int j = 0; j < size; j++)
    {
        cin >> arr[j];
    }

    sorting(arr, size);

    cout << "The Sorted Array is: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Enter a number you want to find: ";
    int item;
    cin >> item;

    int left = 0, right = size - 1;
    binary_search(arr, left, right, item);

    return 0;
}
