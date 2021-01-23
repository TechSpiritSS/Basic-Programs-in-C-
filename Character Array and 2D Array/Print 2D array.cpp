/*
Input
3 3
1    2    3
4    5    6
7    8    9

Output
1    2    3
1    2    3
1    2    3
4    5    6
4    5    6
7    8    9
*/
#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) 
{
    for(int i =0; i < row; i++)
        for(int a =i; row-a != 0; a++)
        {
            for(int j =0; j < col; j++)
                cout << input[i][j] << " ";
            cout << endl;
        }
}