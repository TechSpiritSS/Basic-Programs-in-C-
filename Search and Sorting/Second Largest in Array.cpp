int findSecondLargest(int *input, int n)
{
    int max2 = -2147483648;
    int max1 = input[0];
    for(int i=1; i<n; i++)
        if(input[i]>max1)
            max1 = input[i];     
    for(int i=0; i<n; i++)
        if(input[i]> max2 && input[i]< max1)
            max2 = input[i];
    return max2;
}