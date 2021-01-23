void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
//single digit in each array box
{
    int c=0, sum;
    int a=size1;
    if(size1<size2)
        a=size2;
    for(a, size1, size2 ; ((size1>=0) && (size2>=0)) ; size1--, size2--, a--)
    {
            sum = input1[size1-1]+input2[size2-1] +c;
            output[a]=sum%10;
            c=sum/10;   
    }
    if(size1<size2)
        for(a, size2; size2>=0;size2--,a--)
            output[a]=input2[size2-1];
    if(size1>size2)
        for(a, size1; size1>=0;size1--,a--)
            output[a]=input1[size1-1];
}