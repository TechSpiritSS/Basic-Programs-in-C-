void printSubstrings(char input[]) 
{
    int n = strlen(input);
    char a[100];
 	for (int i = 0; i < n; i++)
    {
        int k= 0;
        for (int j = i; j < n; j++, k++)
        {
            a[k] = input[j];
            a[k+1] = '\0';
            cout << a << endl;
        }
    }
}