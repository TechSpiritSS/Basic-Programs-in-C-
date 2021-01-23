void trimSpaces(char input[])
{
    int k;
    for(int i=0, j=0; input[i] != '\0'; i++)
    {
        if(input[i]!=' ')
        {
            input[j]=input[i];
            j++;
        }
        k=j;
    }
    input[k++]='\0';
}