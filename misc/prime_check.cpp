#include <iostream>
using namespace std;

int main()
{
    int num, fact;
    bool isPrime = true;

    cout << "enter the number ";
    cin >> num;

    for (fact = 2; fact < (num / 1.5); fact++)
    {
        if (num % fact == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << "the number is" << (isPrime ? "" : " not") << " a prime number " << endl;

    return 0;
}