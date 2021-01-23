#include<iostream>
using namespace std;
/*
A
BC
CDE
DEFG
*/

int main()
{    
    int n;
    cin >> n;
    int i =1;
    char s = 'A';
    while(i<=n)
    {
        int j =1;
        char c=s;
        while(j<=i)
        {
            c =s + j-1;
            j++;
            cout << c;
        }
        cout << endl;
        s= 'A'+i;
        i++;   
    } 
}