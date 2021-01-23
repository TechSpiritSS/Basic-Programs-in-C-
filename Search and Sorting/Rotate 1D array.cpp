void rotate(int *input, int d, int n)
{
    int t[d];
    for(int i=0; i<d; i++)
        t[i]=input[i];
    for(int j=d, k=0; j<n; k++, j++)
        input[k]=input[j];
    for(int l=n-d, m=0; l<n; l++, m++)
        input[l]=t[m];
}