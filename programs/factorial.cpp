#include <iostream>
using namespace std;

int Factorial(int num)
{
    // variable declarations
    int factorial = 1;
    // logic
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{

    int number;
    cout << "Enter the number ";
    cin >> number;
    int factorial = Factorial(number);
    cout << "the factorial of the nunber is " << factorial;

    return 0;
}