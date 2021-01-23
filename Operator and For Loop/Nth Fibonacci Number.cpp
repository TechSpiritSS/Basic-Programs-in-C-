#include<iostream>
using namespace std;
/*
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
*/
int main()
{
  int n, f1 =0, f2=1, sum, i=1;
    cin >> n;
    if(n==1)
        sum=1;
    while(i<n)
    {
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
        i++;
    }
    cout << sum;
}