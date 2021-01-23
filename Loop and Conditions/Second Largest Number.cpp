#include<iostream>
using namespace std;
#include <climits>


int main()
{
    int n,i;
    cin >> n;
    if(n<=1)
    {
        int a= INT_MIN;
        cout << a;
    }
    else
    {
        int max1, max2, min=INT_MIN;
        cin >> max1 >> max2;
        while(i<n-1)
        {
                if(max1<max2)
                {
                    min = max1;
                    max1= max2;
                }
            else if(max1>max2)
                min = max2;
            cin >> max2;
            i++;
        }
        cout << min;
    }
}