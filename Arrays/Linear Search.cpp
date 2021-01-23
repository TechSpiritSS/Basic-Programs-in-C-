int linearSearch(int *arr, int n, int x)
{
    int i =0;
    while(i<n)
    {
        if( arr[i]==x)
            return i;
        i++;
    }
    return -1;
}