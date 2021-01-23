#include<iostream>
using namespace std;
/*
1
21
321
4321
*/

int main()
{
    int n;
    cin >> n;
    int i=1;
        while(i<=n)
        {
            int j=1;
            int k=i;
            while(j<=i)
            {
                cout << k;
                k--;
                j++;
            }
            cout << endl;
            i++;
        }  
}