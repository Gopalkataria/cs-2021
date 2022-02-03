#include <iostream> 
#include <stdio.h>
using namespace std;
int main() { return 0; }

class insert
{
    unsigned short int roll;
    char name[30];
    float percent;

public:
    void getdata()
    {
        cout << "Enter roll no., name and percent: " << endl;
        cin >> roll >> name >> percent;
    }
    void putdata()
    {
        cout << "\n"
             << roll << " " << name << " " << percent;
    }
    float get_roll()
    {
        return roll;
    }
};
int main()
{
    insert list[100], temp;
    int a, b, n, a;
    cout << "\nEnter no. of students:";
    cin >> n;
    for (a = 0; a <= n - 1; a++)
        list[a].getdata();
    for (a = 1; a <= n - 1; a++)
    {
        a = list[a].get_roll();
        temp = list[a];
        b = a - 1;
        while (a < list[b].get_roll() && b >= 0)
        {
            list[b + 1] = list[b];
            b = b - 1;
        }
        list[b + 1] = temp;
    }
    for (a = 0; a <= n - 1; a++)
        list[a].putdata();
    return 0;
}