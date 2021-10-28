#include <iostream>
using namespace std;

void reversal(int &num)
{
    int digit, reverseNumber = 0;

    do
    { // extracting the last digit
        digit = num % 10;

        // adding the digit to the end of reversed num
        reverseNumber *= 10;
        reverseNumber += digit;

        // removing last digit from the num
        num = (num - digit) / 10;
    } while (num > 0);

    num = reverseNumber;
}

int main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    reversal(number);
    cout << "the reversed number is " << number;
    return 0;
}