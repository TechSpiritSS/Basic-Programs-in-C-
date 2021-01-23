void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    	for(int i =0, j=0, n=0; n< size1 + size2 ; n++)
    	{
         if(j==size2)
        {
            while(i<size1)
            {
                ans[n]=arr1[i];
                i++;
                n++;
            }
            break;
        }
        else if(i==size1)
        {
            while(j<size2)
            {
                ans[n]=arr2[j];
                j++;
                n++;
            }
            break;
        }
       
        if(arr1[i]<=arr2[j])
        {
            ans[n]=arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            ans[n]=arr2[j];
            j++;
        }
    }
}