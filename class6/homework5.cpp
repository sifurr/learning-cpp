#include <bits/stdc++.h>
using namespace std;

// function prototypes
long add(long a, long b);
long subtract(long a, long b);
long multiply(long a, long b);
long double divide(long a, long b);
long mod(long a, long b);
bool inputValidator(string a, string b);
void print(long a, long b);

int main(void)
{
    string fristNumber, secondNumber;
    long numOne, numTwo;

    cin >> fristNumber;
    cin >> secondNumber;

    bool validatedIput = inputValidator(fristNumber, secondNumber);
    if (!validatedIput)
    {
        cout << "Invalid input";
        return 0;
    }

    stringstream ssOne;
    stringstream ssTwo;

    ssOne << fristNumber;
    ssOne >> numOne;
    ssTwo << secondNumber;
    ssTwo >> numTwo;

    print(numOne, numTwo);

    return 0;
}

// functions' implementations
long add(long a, long b)
{
    return a + b;
}

long subtract(long a, long b)
{
    return a - b;
}

long multiply(long a, long b)
{
    return a * b;
}

long double divide(long a, long b)
{
    return (long double)a / (long double)b;
}

long mod(long a, long b)
{
    return a % b;
}

bool inputValidator(string fristNumber, string secondNumber)
{
    bool firstFlag = true;
    bool secondFlag = true;

    for (int i = 0; i < fristNumber.length(); i++)
    {
        if ((fristNumber.length() > 12) || (fristNumber[i] >= 0 && fristNumber[i] <= 47) || (fristNumber[i] >= 58 && fristNumber[i] <= 127))
        {
            firstFlag = false;
            break;
        }
    }

    for (int i = 0; i < secondNumber.length(); i++)
    {
        if ((secondNumber.length() > 12) || (secondNumber[i] >= 0 && secondNumber[i] <= 47) || (secondNumber[i] >= 58 && secondNumber[i] <= 127))
        {
            secondFlag = false;
            break;
        }
    }

    if (!firstFlag || !secondFlag)
    {
        return false;
    }

    return true;
}

void print(long numOne, long numTwo)
{
    cout << "SUM: " << add(numOne, numTwo) << endl;
    cout << "SUB: " << subtract(numOne, numTwo) << endl;
    cout << "MUL: " << multiply(numOne, numTwo) << endl;
    cout << "DIV: " << divide(numOne, numTwo) << endl;
    cout << "MOD: " << mod(numOne, numTwo) << endl;
}