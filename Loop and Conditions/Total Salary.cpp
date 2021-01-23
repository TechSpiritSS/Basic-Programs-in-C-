#include<iostream>
using namespace std;
/*
totalSalary = basic + hra + da + allow – pf
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
*/
int main() 
{
	double basic, allow;
    char grade;
    cin >> basic >> grade;
    if(grade == 'A')
        allow = 1700;
	if(grade == 'B')
        allow = 1500;
    if((grade !='A')&&(grade !='B'))
        allow = 1300;
    double ts = basic + (0.20*basic) + (0.50*basic) + allow - (0.11*basic);
    int TS = ts + 0.5;
    cout << TS;
}