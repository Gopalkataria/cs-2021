#include <iostream>
using namespace std;

class Flight
{
    int rno, days;
    char name[20];
    float charges;

    float compute()
    {
        float amount;
        amount = days * charges;
        if (amount > 11000)
            amount *= 1.02;
        return amount;
    }

public:
    void feedInfo()
    {
        cout << " Enter details " << endl;
        cin >> rno >> name >> days >> charges;
    }
    void showInfo()
    {
        cout << "Room number " << rno << endl;
        cout << "Days of stay " << days << endl;
        cout << "Charges per day " << charges << endl;
        cout << "Total amount " << compute();
    }
};

int main()
{

    Flight R;
    R.feedInfo();
    R.showInfo();

    return 0;
}