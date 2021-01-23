#include<iostream>
using namespace std;
/*
   1 
  12
 123
*/
int main()
{
	int n;
    cin >> n;
    int s = n-1 ,i=1, j=1;
    while(i<=n)
    {
        while(j<=s)
        {
            cout << ' ';
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}