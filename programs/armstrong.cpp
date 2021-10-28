#include <iostream>
using namespace std;

bool armstrog(int *num)
{

    int original, digit, sumOfCubes = 0;
    original = *num;
    do
    { // extracting the last digit
        digit = *num % 10;
        // adding the digits cube to to the sum
        sumOfCubes += (digit * digit * digit);
        // removing last digit from the num
        *num = (*num - digit) / 10;
    } while (*num > 0);
    return (original == sumOfCubes);
}

int main()
{

    int number;
    cout << "Enter the number ";
    cin >> number;
    bool isArmstrong = armstrog(&number);
    if (isArmstrong)
        cout << "the number is Armstrong number  ";
    else
        cout << "the number is Not an  Armstrong number  ";
    return 0;
}