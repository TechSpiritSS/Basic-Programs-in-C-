bool isPermutation(char input1[], char input2[])
{
    int f[256];
    for(int i=0; i<256; i++)
        f[i]=0;
    for(int i=0; input1[i]!='\0';i++)
    {
        int a = input1[i];
        f[a]= f[a]+1;
    }
    for(int i=0; input2[i]!='\0';i++)
    {
        int a = input2[i];
        f[a]= f[a]-1;
    }
    for(int i=0; i<256; i++)
        if(f[i]!=0)
            return false;    
    return true;
}