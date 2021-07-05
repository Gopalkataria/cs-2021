// a simple calculator program using switch statments

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float n1, n2, answer;
    cout << " enter two numbers ";
    cin >> n1 >> n2;
    cout << " what to do with these numbers ?? choose an option \n ";
    cout << " 1 : add them \n ";
    cout << " 2 : subtract one from other \n ";
    cout << " 3 : multiply them  \n ";
    cout << " 4 : divide one by other \n ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        answer = n1 + n2;
        break;

    case 2:
        answer = n1 - n2;
        break;

    case 3:
        answer = n1 * n2;
        break;

    case 4:
        answer = n1 / n2;
        break;

    default:
        cout << choice << "is not a valid choice ";
        break;
    }

    cout << "your answer is " << answer;

    return 0;
}