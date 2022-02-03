#include <iostream>
#include <stdio.h>
using namespace std;

class merge
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
    int get_roll()
    {
        return roll;
    }
};
int main()
{
    merge a[100], b[100], c[200];
    int i, j, k, m, n;
    cout << "\nEnter m and n:";
    cin >> m >> n;
    for (i = 0; i <= m - 1; i++)
        a[i].getdata();
    for (i = 0; i <= n - 1; i++)
        b[i].getdata();
    i = j = k = 0;
    while (i <= m - 1 && j <= n - 1)
    {
        if (a[i].get_roll() < b[j].get_roll())
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i <= m - 1)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= n - 1)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    for (i = 0; i <= m + n - 1; i++)
        c[i].putdata();
    return 0;
}
