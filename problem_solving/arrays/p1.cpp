#include <bits/stdc++.h>
using namespace std;

int calculateSum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int calculateSumOfArithmeticSeries(int n)
{
    int sum = (n * (n + 1)) / 2;

    return sum;
}

int main()
{
    int arraySize, n, arithmeticSum;
    cout << "Enter Array's size: " << endl;
    cin >> arraySize;

    int array[arraySize], summation;

    cout << "Enter Array's elements: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    summation = calculateSum(array, arraySize);
    cout << "Sum of all elements: " << summation << endl
         << endl;

    cout << "Enter the last number of Arithmetic series: " << endl;
    cin >> n;

    arithmeticSum = calculateSumOfArithmeticSeries(n);
    cout << "Sum of arithmetic series: " << arithmeticSum << endl;

    return 0;
}