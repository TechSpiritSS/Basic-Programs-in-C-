#include <limits.h>
//Largest Row or Column Sum
void findLargest(int **input, int nRows, int mCols)
{
    int row = nRows;
    int col = mCols;
    int maxr = INT_MIN;
    int maxc = INT_MIN;
    int r, c, sum = 0;
    for(int i=0; i < col; i++)
    {
        for(int j=0; j< row; j++)
            sum = sum + input[i][j];
        if(sum > maxr)
        {
            maxr = sum;
            r=i;
        }
        sum=0;
    }

    for(int i=0; i < col; i++)
    {
        for(int j=0; j<row; j++)
            sum = sum + input[j][i];
        if(sum > maxc)
        {
            maxc = sum;
            c=i;
        }
        sum=0;
    }
    if(maxc > maxr)
        cout << "column " << c << " " << maxc << endl; 
    else if(maxr > maxc)
        cout << "row " << r << " " << maxr << endl; 
    else if (sum == 0)
        cout << "row " << r << " " << maxr << endl;
    else if (maxc == maxr)
        cout << "row " << r << " " << maxr << endl;

}