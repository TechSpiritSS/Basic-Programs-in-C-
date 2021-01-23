#include<iostream>
using namespace std;

int main() {
	int x, n, i, s;
    cin >> x >> n;
    i=1;
    s=x;
    if(n==0)
        cout << "1";
    else
    {
    	while (i<n)
   	 	{
    	  s = s*x; 
      	  i++;
    	}
		cout << s;
    }
}