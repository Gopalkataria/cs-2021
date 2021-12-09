#include <iostream>

using namespace std;

int main()
{

    int *p, matrix[3][2];

    cout << " Enter the matrix elements" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << " Printing the matrix elements " << endl;

    p = &matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(p + (i * 2) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}