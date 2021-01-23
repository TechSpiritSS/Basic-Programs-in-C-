#include<iostream>
using namespace std;

/*
    *
   *** 
  *****
 *******
*/
int main()
{
    int j = 1;   
    int i =1;
    int val = 1;
    int N;
    cin >> N;
    while (val <= N)       
    {
        cout << endl;
        int k =1;
        while (k <= (N-val))
        {
            cout << " ";
            k++;
        }
        
     while (j <= i)
     {
         cout << "*";
         j++;
                  
     }   
        i=i+2;
        j=1;
        val++;
         
       }            
}