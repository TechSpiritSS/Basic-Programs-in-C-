void spiralPrint(int **input, int nRows, int nCols)
{
    int m = nRows, n = nCols;
    int i, k = 0, l = 0; 
    while (k < m && l < n)
    { 
        for (i = l; i < n; ++i) 
            cout << input[k][i] << " ";  
        k++;
        for (i = k; i < m; ++i)  
            cout << input[i][n - 1] << " ";  
        n--; 
        if (k < m)
        { 
            for (i = n - 1; i >= l; --i) 
                cout << input[m - 1][i] << " ";  
            m--; 
        } 
        if (l < n) 
        { 
            for (i = m - 1; i >= k; --i) 
                cout << input[i][l] << " "; 
            l++; 
        } 
    } 
}