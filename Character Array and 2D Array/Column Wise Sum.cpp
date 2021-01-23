#include<iostream>
using namespace std;

int main()
{
    int m,n, sum=0;
    cin >> m >> n;
    int a[m][n];
    for(int i =0; i<m; i++)
        for(int j=0; j<n ; j++)
            cin >> a[i][j];
    for(int i=0; i<n; i++)
    {
        sum =0;
        for(int j=0; j<m;j++)
            sum = sum + a[j][i];
        cout << sum << " ";
    }
}