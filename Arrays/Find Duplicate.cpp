int duplicateNumber(int *arr, int size)
{
int i=0, j=0, a=0;    
    if(size==1)
    return a;
    while(i<size)
    {
        for(j=0; j<size; j++)
        {
            if(j==i)
                continue;
            if(arr[j]==arr[i])
                return arr[i];
        }
        i++;
    }
}