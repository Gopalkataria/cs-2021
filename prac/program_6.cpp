#include <iostream> 
#include <stdio.h>
using namespace std;

class matrix
{
    unsigned short int m, n, q, a[10][10], b[10][10], c[10][10];

public:
    matrix();
    void product();
};
matrix::matrix()
{
    int i, j;
    cout << "\nEnter size of matrix A : ";
    cin >> m >> n;
    cout << "\nEnter matrix A: ";
    for (i = 0; i <= m - 1; i++)
        for (j = 0; j <= n - 1; j++)
            cin >> a[i][j];
    cout << "\nEnter no.of columns of matrix B : ";
    cin >> q;
    cout << "\nEnter matrix B: ";
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j <= q - 1; j++)
            cin >> b[i][j];
    product();
}
void matrix::product()
{
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= q - 1; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k <= n - 1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    matrix z;
    return 0;
}
