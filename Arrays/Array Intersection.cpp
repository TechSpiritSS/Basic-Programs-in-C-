// Find common elements between two arrays
void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i =0; i< size1; i++)
    {
        for(int j=0; j<size2; j++)
            if(input1[i]==input2[j])
            {
                input2[j]=99999;
                cout << input1[i] << " ";
                break;
            }
    }
    cout << endl;
}