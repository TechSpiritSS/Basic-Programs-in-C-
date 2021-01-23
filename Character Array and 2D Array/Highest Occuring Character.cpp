char highestOccurringChar(char input[])
{
    int size = strlen(input);
    int ascii[256];
    for(int i =0; i<256; i++)
        ascii[i] = 0;
    for(int i =0; i < size; i++)
    {
        int n = input[i];
        ascii[n]++;
    }
    char pmax;
    int max = 0;
    for(int i =0; i<256; i++)
    {
        if(ascii[i] > max)
        {
            max = ascii[i];
        	pmax = i;
        }
    }
    return pmax;
}