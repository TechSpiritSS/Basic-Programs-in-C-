#include <iostream>
using namespace std;
int main()
{
    int n,i,j, p;
    cin >> n;
    for(i =2; i<=n; i++)
        {
            p=1;
            for(j=2; j<i ;j++)
            {
                if(i%j==0)
                { 
                    p=0;
                    break;  
                }
            }          
              if(p==1)
                 cout << i << endl;             
        }
}