void removeAllOccurrencesOfChar(char input[], char c)
{
    int size = strlen(input);
    char o[size];
    for(int i =0, a=0; i<size; i++)
    {
        if(input[i]==c)
            continue;
        else
        {
            o[a]=input[i];
            a++;
            o[a]='\0';
        }
    }
    for(int i=0; i<size; i++)
    {
        input[i]=o[i];
        if(o[i]=='\0')
            break;
    }
}