#include <bits/stdc++.h>
using namespace std;

int findMinNumberInAnArray(int array[], int arraySize)
{
    int minNumber = INT_MAX;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] < minNumber)
        {
            minNumber = array[i];
        }
    }

    return minNumber;
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

    int minNumber = findMinNumberInAnArray(array, arraySize);
    cout << "Minimum number: " << minNumber << endl;

    return 0;
}