#include<iostream>
using namespace std;
/*
    1
   212
  32123
 4321234
543212345
*/
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int s=n-i; s>0; s--)
            cout << " ";
        for(int j=i; (j<=i && j>0); j--)
            cout << j;
        for(int k=2; k<=i; k++)
            cout << k;
        cout << endl;
    }
}