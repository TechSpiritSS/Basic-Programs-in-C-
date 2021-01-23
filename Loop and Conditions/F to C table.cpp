#include<iostream>
using namespace std;


int main()
{

       int S, E, W;
    cin >> S >> E >> W;
    for(S; S <= E; S)       
    {
        int C = (5 * (S-32) )/9;
        cout << S << "\t" << C << endl;
        S = S+W;
    }
}