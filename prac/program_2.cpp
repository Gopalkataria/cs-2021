#include <iostream> 
#include <stdio.h>
using namespace std;

class select
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
    float get_percent()
    {
        return percent;
    }
};
int main()
{
    select z[100], t;
    int i, j, n, pos;
    float large;
    cout << "\nEnter no. of students:";
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        z[i].getdata();
    for (i = 1; i <= n - 1; i++)
    {
        large = z[i].get_percent();
        pos = i;
        for (j = i + 1; j <= n - 1; j++)
            if (large < z[j].get_percent())
            {
                large = z[j].get_percent();
                pos = j;
            }
        if (z[i - 1].get_percent() < z[pos].get_percent())
        {
            t = z[i - 1];
            z[i - 1] = z[pos];
            z[pos] = t;
        }
    }
    for (i = 0; i <= n - 1; i++)
        z[i].putdata();
    return 0;
}