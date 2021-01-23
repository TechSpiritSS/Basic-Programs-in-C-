#include<iostream>
using namespace std;
/*
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' 
*/

int main()
{
    int n, c, i, sum =0, prd =1;
    cin >> n >> c;
    if(c==1)
    {
        for(i=1; i<=n;i++)
            sum = sum + i;
        cout << sum;
    }
    else if(c==2)
    {
        for(i=1; i<=n; i++)
            prd = prd * i;
        cout << prd;
    }
    else
        cout << "-1";
}