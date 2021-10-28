// date : 27 sep
//  class Teacher

#include <iostream>
#include <string.h>
using namespace std;

class Teacher
{
private:
    string name, address, qualification;
    int age;
    float salary;
    void compute()
    {
        if (qualification == "G")
        {
            salary = 30500;
        }
        else if (qualification == "PG")
        {
            salary = 50500;
        }
        else
        {
            salary = 20000;
        }

        if (age > 50)
        {
            salary *= 1.1;
        }
    }

public:
    Teacher(string n, string addr, string qual, int a)
    {
        name = n;
        address = addr;
        qualification = qual;
        age = a;
    }
    void display()
    {
        compute();
        cout << "Name :" << name << endl;
        cout << "Address :" << address << endl;
        cout << "Qualification :" << qualification << endl;
        cout << "Age :" << age << endl;
        cout << "Salary :" << salary << endl;
    }
};

int main()
{

    Teacher t("Rupa", "Goa", "PG", 80);
    t.display();

    return 0;
}