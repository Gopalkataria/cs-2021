#include <iostream>
using namespace std;
class Book
{
    long Bid, Qty;

public:
    void Purchase()
    {
        cin >> Bid >> Qty;
    }
    void Sale()
    {
        cout << Bid << "Old : " << Qty << endl;
        cout << "New: " << Qty << endl;
    }
};
int main()
{
    Book B;
    B.Purchase();
    B.Sale();
    return 0;
}