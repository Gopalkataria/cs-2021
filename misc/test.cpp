#include <iostream>
using namespace std;

int main()
{
    enum days
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };
    for (int day = monday; day <= sunday; day++)
        cout << day << endl;
    days today = monday;
    cout << today;
    return 0;
}