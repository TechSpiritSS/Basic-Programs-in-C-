#include <climits>
#include <cstring>
void minLengthWord(char input[], char output[])
{
    int c=0, pe=0;
    int s,e=0;
    int temp = INT_MAX;
    for(int i=0; i <=strlen(input); i++ )
    {

        if(input[i] != ' ' && i != strlen(input))
            c++;
        else if(input[i] == ' ')
        {
            if(temp > c)
            {
                temp =c;
                s=pe;
                e=i;
            }
            pe=i+1;
            c=0;
        }
        else if(temp > c)
        {
            temp =c;
            s=pe;
            e=i;
        }
    }
    int i =0;
    for(s; s+1<=e; s++, i++)
        output[i] = input[s]; 
}