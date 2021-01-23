#include<iostream>
using namespace std;
/*
reverse of 10400 will be 401 instead of 00401.
*/
int main()
{
    int n, i, r=0;
    cin >> n;
    while(n>0)
    {
        i= n%10;
        n= n/10;
        r= r*10 + i;
    }
    cout << r;
}