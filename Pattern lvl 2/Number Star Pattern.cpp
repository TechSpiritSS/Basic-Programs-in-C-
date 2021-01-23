#include<iostream>
using namespace std;
/*
1234554321
1234**4321
123****321
12******21
1********1
*/

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
            cout << j;
        for(int s=2; s<=i;s++)
            cout << "**";
        for(int k=n+1-i; k>=1;k--)
            cout << k;
        cout << endl;
    }
}