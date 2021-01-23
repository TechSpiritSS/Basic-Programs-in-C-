#include<iostream>
using namespace std;
/*
   1
  232
 34543
4567654
*/
int main()
{
    int n, k=1, z;
    cin >> n;
    int i=1, j=1, s=n;
    while(i<=n)
    {
        while(j<s)
        {
            cout << " ";
            j++;
        }
        j =1;
        z=i;
        while(j<=i)
        {
            cout << z ;
            j++;
            z++;
        }
        if(k>1)
        {
            while(k>i-1)                  
            {
                cout << k;
                k--;
            }
        }
        k=z;
        j=1;
        i++;
        s--;
        cout << endl;        
    } 
}