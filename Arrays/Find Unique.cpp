/*
2 3 1 6 3 6 2
Output - 1
*/
int findUnique(int *arr, int size)
{
    int i=1, j=0, a=arr[0];
    for(i; i< size; i++)
        a = a ^ arr[i];
    return a;
}