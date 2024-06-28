#include <bits/stdc++.h>
using namespace std;

int findMaxNumber(int firstNumber, int secondNumber)
{
    int maxNumber;

    if (firstNumber < secondNumber)
    {
        maxNumber = secondNumber;
    }
    else
    {
        maxNumber = firstNumber;
    }

    return maxNumber;
}

int main()
{
    int firstNumber, secondNumber, maxNumber;
    ;
    cout << "Enter first number: " << endl;
    cin >> firstNumber;
    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    maxNumber = findMaxNumber(firstNumber, secondNumber);
    cout << "Max is: " << maxNumber;

    return 0;
}