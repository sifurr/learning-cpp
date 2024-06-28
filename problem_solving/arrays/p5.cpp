#include <bits/stdc++.h>
using namespace std;

int findMaxNumber(int firstNumber, int secondNumber)
{
    int minNumber;

    if (firstNumber > secondNumber)
    {
        minNumber = secondNumber;
    }
    else
    {
        minNumber = firstNumber;
    }

    return minNumber;
}

int main()
{
    int firstNumber, secondNumber, minNumber;
    ;
    cout << "Enter first number: " << endl;
    cin >> firstNumber;
    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    minNumber = findMaxNumber(firstNumber, secondNumber);
    cout << "Min is: " << minNumber;

    return 0;
}