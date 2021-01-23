#include<iostream>
using namespace std;

int main()
{
    int n, i=1;
    cin >> n;
    while (i*i<=n)
    {
        if(i*i>n)
            break;
        i++;
    }
    cout << (i-1);
}