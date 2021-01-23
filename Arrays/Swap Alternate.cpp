void swapAlternate(int *arr, int size)
{
    int i=0, j=1;
    while(j<size)
    {
        int temp = arr[j];
        arr[j] = arr [i];
        arr [i] = temp;
        i=i+2;
        j=j+2;
    }
}