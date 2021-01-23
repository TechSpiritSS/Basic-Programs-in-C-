#include<iostream>
using namespace std;

int main()
{
    int n,i=0, sum=0;
    cin >> n;
    int a[n];
    while(i<n)
    {
        cin >> a[i];
        sum = sum + a[i];
        i++;
    }
    cout << sum;
}