void sortZeroesAndOne(int *input,int size)
{
	int a=0;
	for(int i=0;i<size;i++)
	{
		if(input[i]==0) a++;
		input[i]=1;
	}
	for(int i=0;i<a;i++) input[i]=0;
cout << endl;
}