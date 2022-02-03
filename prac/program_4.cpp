#include <iostream> 
#include <stdio.h>
using namespace std;

class Binary
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
    int check(char s[])
    {
        return (strcmp(s, name));
    }
};
int main()
{
    Binary list[100];
    int i, low, high, mid, n, c = 1, temp;
    char x[30];
    cout << "\nEnter no. of students:";
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        list[i].getdata();
    cout << "\nEnter name to be searched :";
    cin >> x;
    low = 0;
    high = n - 1;
    while (low <= high && c)
    {
        mid = (low + high) / 2;
        temp = list[mid].check(x);
        if (temp == 0)
            c = 0;
        else if (temp > 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (c == 0)
        list[mid].putdata();
    else
        cout << "\nName not in a list...";
    return 0;
}
