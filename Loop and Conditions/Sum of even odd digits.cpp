#include<iostream>
using namespace std;

int main() 
{
	int N, a, e, o;
    e=0;
    o=0;
    cin >> N;
    while (N > 0)
    {
        a=N%10;
        N=N/10;
        if(a%2==0)
            e += a;
        else
         o += a;   
    }
	cout << e << " "<< o;
}