int duplicateNumber(int *arr, int size)
{
    int i = 0, j = 0;
    while (i < size - 1)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
                return arr[i];
        }
        i++;
    }
    return 0;
}