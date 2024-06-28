#include <bits/stdc++.h>
using namespace std;

int findMaxNumberInAnArray(int array[], int arraySize)
{
    int maxNumber = INT_MIN;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] > maxNumber)
        {
            maxNumber = array[i];
        }
    }

    return maxNumber;
}

int main()
{
    int arraySize;
    cout << "Enter the Array's size: " << endl;
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the Array's elements: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    int maxNumber = findMaxNumberInAnArray(array, arraySize);
    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}