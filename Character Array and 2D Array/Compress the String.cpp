void stringCompression(char input[]) 
{
    int i, count=1,j=0;
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]==input[i+1])
            count++;
        else if(input[i]!=input[i+1])
        {
            if(count>1)
            {
                input[j++]=input[i];
                input[j++]=(char)(48+count);
            }
            else if(count==1)
                input[j++]=input[i];
            count=1;
        }
    }
    input[j]='\0';
}