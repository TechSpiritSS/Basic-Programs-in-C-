#include<iostream>
using namespace std;
/*
Pattern for N = 4
4444
4444
4444
4444
*/

int main()
{
    int N;
    cin >> N;
    int i=1;
    int j=1;
    while(i<=N)
    {
        while(j<=N)
        {    
        cout << N;
        j++;
        }
        i++;
        j=1;
        cout << endl;
    }  
}