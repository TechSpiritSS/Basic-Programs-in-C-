#include<iostream>
using namespace std;

int main()
{
    long sum =0;
    int i, n, a=1;
    cin >> n;
    while(n>0)
    {
        i=n%2;
        n=n/2;
        sum = sum + (a*i);
        a=a*10;
    }
    cout << sum;
}