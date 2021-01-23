#include<iostream>
using namespace std;
/*
    *
   *** 
  *****
 *******
*/

int main()
{
    int n, k;
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
            while(j<=i)
            {
                cout << "*" ;
                j++;
            }
            
            while(k<i)
            {
                cout << "*";
                k++;
            }
            j=1;
            k=1;
            i++;
            s--;
            cout << endl;            
        }
}