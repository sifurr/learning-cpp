#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;
    cout << "Enter Array's size: " << endl;
    cin >> arraySize;

    int array[arraySize], summation[arraySize];

    cout << "Enter Array's elements: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    cout << "This is your array: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    summation[0] = array[0];

    for (int i = 1; i < arraySize; i++)
    {
        summation[i] = summation[i - 1] + array[i];
    }

    int position;
    cout << "Enter the position up to which you want to calculate the sum:: " << endl;
    cin >> position;
    cout << "Sum: " << summation[position - 1] << endl;

    return 0;
}