#include <iostream>
using namespace std;

int calculateOddNumbersSummation(int arr[], int n)
{
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddSum += arr[i];
        }
    }

    return oddSum;
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

    int sum_of_odd_numbers = calculateOddNumbersSummation(arr, n);
    cout << "Odd Number's Summation: " << sum_of_odd_numbers;

    return 0;
}