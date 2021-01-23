void wavePrint(int **input, int nRows, int mCols)
{
    int j=0;
    for(int i =0; i < mCols; i++)
    {
        if(i%2==0)
            for(j=0; j<nRows; j++)
                cout << input[j][i] << " ";
        else
            for(j=nRows-1; j>=0; j--)
                cout << input[j][i] << " ";          
    }
    cout << endl;
}