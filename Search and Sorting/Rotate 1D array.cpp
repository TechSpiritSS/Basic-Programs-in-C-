void rotate(int *input, int d, int n)
{
    int t[d];
    int m=0;
    for(int i=d; i<n; i++){
        t[m]=input[i];
       m++;}
      
    for(int j=0 j<d;j++){

        t[m]=input[j];
       m++; 
}
       m=0;
    for(int l=0; l<n; l++)
        input[l]=t[m];
           m++;
}
