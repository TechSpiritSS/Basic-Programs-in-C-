#include<iostream>
using namespace std;
/*
E
DE
CDE
BCDE
ABCDE
*/

int main()
{    
    int n;
    cin >> n;
    char s = 'A' + n-1;
    int i =1;
    while(i<=n)
    {
        int j=1;
        char c=s;
        char d=c;
        while(j<=i)
        {
            c = d - 1+j;
            cout << c;
            j++;
        }
        i++;
        cout << endl;
        s--;
    }     
}