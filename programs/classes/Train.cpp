// date : 12 Nov
//  train class hw

#include <iostream>
#include <string.h>
using namespace std;

class Train
{
    int tno;

public:
    Train(int t)
    {
        tno = t;
    }
};

class Destination
{
    char place[30];

public:
    Destination(char p[])
    {
        strcpy(place, p);
    }
};

class Ticket : public Train,
               public Destination
{
    int fare;

public:
    Ticket(int t, char p[], int f) : Destination(p), Train(t)
    {
        fare = f;
        cout << fare << place << tno;
    }
};

int main()
{
    int k, l;
    char m[30];
    cin >> k >> m >> l;
    return 0;
}
