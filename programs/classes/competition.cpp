// date : 28 sep
// class competition

#include <iostream>
#include <string.h>
using namespace std;

class Competition
{
private:
    int event_no, score;
    char description[30];
    char qualified;

public:
    Competition()
    {
        event_no = 101;
        strcpy(description, "State Level");
        qualified = 'N';
    }
    void input()
    {
        cout << " Enter details " << endl;
        cin >> event_no >> description >> score;
    }
    void award(int cutoff)
    {
        if (score > cutoff)
        {
            qualified = 'Y';
        }
    }
    void show()
    {
        cout << "Event no : " << event_no << endl;
        cout << "Description : " << description << endl;
        cout << "Score : " << score << endl;
        cout << "qualified : " << qualified << endl;
    }
};

int main()
{
    Competition c;
    c.input();
    c.award(200);
    c.show();

    return 0;
}