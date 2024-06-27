#include <bits/stdc++.h>
using namespace std;

int findNumberInAnArray(int arr[], int size, int number)
{
    int arrayIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            arrayIndex = i;
            break;
        }
    }

    return arrayIndex;
}

void printNumberExistsOrNot(int arr[], int size, int number)
{
    int arrayIndex = findNumberInAnArray(arr, size, number);

    if (arrayIndex >= 0)
    {
        cout << "Number exists at index: " << arrayIndex << endl;
    }
    else
    {
        cout << "Number does not exists" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter array's size: " << endl;
    cin >> n;

    int arr[n], number;
    cout << "Enter array's elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number you are looking for: " << endl;
    cin >> number;

    printNumberExistsOrNot(arr, n, number);

    return 0;
}