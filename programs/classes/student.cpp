#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int roll;

protected:
    void display()
    {
        cout << " Roll " << roll << endl;
    }

public:
    Student(int r)
    {
        roll = r;
        display();
    }
};

class School
{
    char name[30];

protected:
    void display()
    {
        cout << " Name " << name << endl;
    }

public:
    School(char n[])
    {
        strcpy(name, n);
        display();
    }
};

class Result
{
    float percent;
    Student X;
    School Y;

public:
    Result(float p, char n[], int r) : X(r), Y(n)
    {
        percent = p;
    }
    void display()
    {
        cout << " Percent " << percent << endl;
    }
};

int main()
{

    Result R(99.6, "Dempo", 1);
    R.display();
    return 0;
}