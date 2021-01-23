void removeConsecutiveDuplicates(char input[]) 
{
    int a, size = strlen(input);
    char o[size];
    for(int i =1, a=1; i<size; i++)
        {
            if(input[i]==input[i-1])
                continue;
    		else
            {
                o[a]=input[i];
                a++;
                o[a]='\0';
            }
        }
    for(int i=1; i<=a ; i++)
        input[i]=o[i];
}