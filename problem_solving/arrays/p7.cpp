#include <bits/stdc++.h>
using namespace std;

void swapTwoNumbers(int &firstNumber, int &secondNumber)
{
    int tmp;
    tmp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tmp;
}

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter first number: " << endl;
    cin >> firstNumber;
    cout << "Enter second number: " << endl;
    cin >> secondNumber;
    cout << "Numbers before swapping: " << firstNumber << " " << secondNumber << endl;

    swapTwoNumbers(firstNumber, secondNumber);
    cout << "Numbers after swapping: " << firstNumber << " " << secondNumber << endl;

    return 0;
}