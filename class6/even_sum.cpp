#include <iostream>
using namespace std;

int find_even_numbers_summation(int n)
{
    int sum = 0;

    for (int count = 0; count <= n; count++)
    {
        if (count % 2 == 0)
        {
            sum += count;
        }
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int sum_of_even_numbers = find_even_numbers_summation(n);
    cout << "Even Number's Summation: " << sum_of_even_numbers;

    return 0;
}