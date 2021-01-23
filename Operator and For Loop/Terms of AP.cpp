#include<iostream>
using namespace std;

int main() 
{
    int n, i;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        int a = 3*i + 2;
        if(a%4==0)
        {
            n++;
            continue;
        }
        cout << a << " ";
    }
}