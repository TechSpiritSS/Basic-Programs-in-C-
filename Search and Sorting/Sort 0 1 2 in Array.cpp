void sort012(int *arr, int n)
{
    int c0 =0, c1=0, c2=0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]==0)
            c0++;
        if(arr[i]==1)
            c1++;
		if(arr[i]==2)
            c2++;
    }
    for(int i=0; i<c0; i++)
        arr[i]=0;
    for(int i=c0, j=0; j<c1; j++, i++)
        arr[i]=1;
    for(int i=c0+c1, j=0; j<c2; i++, j++)
        arr[i]=2;
}