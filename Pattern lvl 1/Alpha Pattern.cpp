#include<iostream>
using namespace std;
/*
 A
 BB
 CCC
*/

int main()
{   
    int n;
    cin >> n;
    int i =1;
    while(i<=n)
    {
        int j =1;
        while(j<=i)
        {
            char c = 'A' + i-1;
            j++;
            cout << c;
        }
        cout << endl;
        i++;
    }   
}