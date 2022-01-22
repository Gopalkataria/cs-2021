#include <iostream>
using namespace std;

void findsum(int matrix[][3], int rowSize, int colSize)
{

    int r, c, rsum, csum;

    // finding sum of elements in a row
    for (r = 0; r < rowSize; r++)
    {
        rsum = 0;
        for (c = 0; c < colSize; c++)
        {
            rsum += matrix[r][c];
        }
        cout << "Sum of row " << 1 + r << " is " << rsum << endl;
    }

    // finding sum of elements in a column
    for (c = 0; c < colSize; c++)
    {
        csum = 0;
        for (r = 0; r < rowSize; r++)
        {
            csum += matrix[r][c];
        }
        cout << "Sum of Col " << 1 + c << " is " << csum << endl;
    }
}

int main()
{

    int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    findsum(a, 3, 3);
    return 0;
}