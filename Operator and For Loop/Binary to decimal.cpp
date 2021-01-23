#include<iostream>
using namespace std;

int main()
{
    long n;
    int r,i, a=1, sum=0;
    cin >> n;
    while(n>0)
    {
        i = n%10;
        n=n/10;
        r = i*a;
        a= a*2;
        sum = sum +r;
    }
    cout << sum;
}