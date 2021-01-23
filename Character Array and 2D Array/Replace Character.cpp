//Replace char1 with char2 in a string
void replaceCharacter(char input[], char c1, char c2) 
{
   for(int i=0; input[i] != '\0'; i++)
       if(input[i]==c1)
           input[i]=c2;
}