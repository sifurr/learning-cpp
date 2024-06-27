#include <iostream>
using namespace std;

int calculateEvenNumbersSummation(int arr[], int n)
{
    int evenSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
    }

    return evenSum;
}

int main()
{
    int n;
    cout << "Enter array's size: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter array's elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sumOfEvenNumbers = calculateEvenNumbersSummation(arr, n);
    cout << "Even Number's Summation: " << sumOfEvenNumbers;

    return 0;
}