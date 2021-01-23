bool checkPalindrome(char str[])
{
    int size=0;
    for(int i=0; str[i] != '\0'; i++)
        size++;
    for(int i=0, j=size-1; i<=(size+1)/2; i++, j--)
        if(str[i]!=str[j])
            return false;
    return true;
}