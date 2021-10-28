// date : 10 oct
//  classes inheriting

#include <iostream>
using namespace std;

class DistanceEdu
{
    int center_id;

public:
    DistanceEdu(int code)
    {
        center_id = code;
    }

protected:
    void display()
    {
        cout << "center id " << center_id << endl;
    }
};

class RegularEdu
{
private:
    int school_code;

public:
    RegularEdu(int code)
    {
        school_code = code;
    }

protected:
    void Display()
    {
        cout << "school code " << school_code << endl;
    }
};

class course : public DistanceEdu, public RegularEdu
{
    int course_code;

public:
    course(int ccode, int scode, int cid) : DistanceEdu(cid), RegularEdu(scode)
    {
        course_code = ccode;
    }
    void display_2()
    {
        display();
        Display();
        cout << "course code " << course_code;
    }
};

int main()
{
    course C(1, 2, 3);
    C.display_2();

    return 0;
}