void pushZeroesEnd(int *input, int size)
{
    int c =0;
    for(int i=0; i < size; i++)
    {
        if(input[i]!=0)
        {
            input[c]=input[i];
            c++;
        }
    }
    while(c<size)
    {
        input[c]=0;
        c++;
    }
}