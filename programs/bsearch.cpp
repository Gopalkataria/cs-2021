#include <iostream>
using namespace std;

void bsearch(int A[], int size, int x)
{
    int mid, low, high;
    high = size - 1;
    low = 0;
    int found = 0;

    while (low <= high)
    {

        mid = (low + high) / 2;
        if (x == A[mid])
        {
            cout << x << " Found at position " << mid << endl;
            found = 1;
        }
        if (x < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (!found)
    {
        cout << x << " not in array " << endl;
    }
}

int main()
{

    int arr[] = {11, 21, 31, 41, 51, 65, 76, 86, 96, 100};
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    bsearch(arr, 10, 32);
    bsearch(arr, 10, 86);

    return 0;
}