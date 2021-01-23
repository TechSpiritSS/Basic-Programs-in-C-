#include <iostream>
using namespace std;
/*
  *
 ***
*****
 ***
  *
*/

int main()
{
    int k, i, j, n, n1, n2;
    cin >> n;
    i=1;
    n1=(n+1)/2;
    n2=n1-1;
    //Upper
    while(i<=n1)
    {
        k=n1-1;
        while( k>=i)
        {
            cout << " ";
            k--;
        }
        j=1;
        while(j<=2*i-1)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl ;        
    }
    //LOWER
    i=1;
    while(i<=n2)
    {
        k=1;
        while( k<=i)
        {
            cout << " ";
            k++;
        }
        j=2*n2;
        while(j>2*i-1)
        {
            cout << "*";
            j--;
        }
        i++;
        cout << endl ;        
    }    
}