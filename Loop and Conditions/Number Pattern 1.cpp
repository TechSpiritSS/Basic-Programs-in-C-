#include<iostream>
using namespace std;

/*
1
23
345
4567
*/

int main()
{
    int j = 1;   
    int i =1;
    int val = 1;
    int N;
    cin >> N;
    while (i <= N)       
    {
        
     while (j <= i)
     {
         cout << val;
         j++;
         val++;
     }   
        i++;
        j=1;
        val = i;
         cout << endl;
    }            
}