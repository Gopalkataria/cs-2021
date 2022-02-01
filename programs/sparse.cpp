#include <iostream>
using namespace std;
class sparse
{
    unsigned short int m, n, s[10][10], t[50][3];

public:
    sparse();

private:
    void process();
};
sparse::sparse()
{
    int i, j;
    cout << "\nEnter size of Sparse Matrix S : ";
    cin >> m >> n;
    cout << "\nEnter matrix A: ";
    for (i = 0; i <= m - 1; i++)
        for (j = 0; j <= n - 1; j++)
            cin >> s[i][j];
    process();
}
void sparse::process()
{
    int i, j, k = 1, count = 0;
    t[0][0] = m;
    t[0][1] = n;
    for (i = 0; i <= m - 1; i++)
        for (j = 0; j <= n - 1; j++)
            if (s[i][j])
            {
                count++;
                t[k][0] = i;
                t[k][1] = j;
                t[k][2] = s[i][j];
                k++;
            }
    t[0][2] = count;
    cout << "\n3 tuple form 2D array: " << endl;
    cout << "R C V" << endl;
    for (i = 0; i <= count; i++)
    {
        for (j = 0; j <= 2; j++)
            cout << t[i][j] << " ";
        cout << "\n";
    }
}
int main()
{
    sparse z;
    return 0;
}