// date : 17 sep
//  class flight

#include <iostream>
using namespace std;

class Flight
{
    int flightNo;
    char destination[20];
    float distance,
        feul;

    float calFuel()
    {
        if (distance <= 1000)
            feul = 500;
        else if (distance <= 2000)
            feul = 1100;
        else
            feul = 2200;
    }

public:
    void feedInfo()
    {
        cout << " Enter details " << endl;
        cin >> flightNo >> destination >> distance;
        calFuel();
    }
    void showInfo()
    {
        cout << "Flight No " << flightNo << endl;
        cout << "Destination " << destination << endl;
        cout << "Distance " << distance << endl;
        cout << "Feul " << feul << endl;
    }
};

int main()
{

    Flight myFlight;
    myFlight.feedInfo();
    myFlight.showInfo();

    return 0;
}