#include <iostream>

int checksym(int mat[][], int size)
{
    int issym = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                issym = 0;
                break;
            }
        }
    }

    return issym;
}