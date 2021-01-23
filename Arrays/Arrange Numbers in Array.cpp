/*
Populate like this
1 3 5 7 9 8 6 4 2
*/
void arrange(int *arr, int n)
{
 int i=0, j=n-1, a=1, b=2;

    while(i<(n/2))
    {
        arr[i] = a;
        a= a+2;
        i++;
    }
    while(j>=(n/2))
    {
        arr[j]=b;
        b=b+2;
        j--;
    }
    if(n%2 != 0)
        arr[(n/2)] =n;
}