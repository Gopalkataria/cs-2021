#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3, sum = 0, prod = 0;
    do
    {
        sum = a + b;
        prod = a * b;
        cout << sum << " " << prod << endl;
        a++;
        b++;
    } while (sum < 10 && prod < 20);
    return 0;
}