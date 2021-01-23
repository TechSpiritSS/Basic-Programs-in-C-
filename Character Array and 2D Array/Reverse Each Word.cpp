void reverseEachWord(char input[])
{
    int size = strlen(input);
    char o[size];
    for(int i=0; i<size; i++)
        o[i]=input[i];
    //reversing
    
    int a =0;
    for(int i =0; i<size; i++)
    {
        if(o[i]==' ' || i==size-1)
        {
            if(i==size-1)
                i++;
            for(int j=i-1, k=a; k<=i; j--,k++)
            {
                input[k]=o[j];
                a=i+1;
            }
            if(i==size)
                input[i]='\0';
            else
            input[i]=' ';
        }
    }
}