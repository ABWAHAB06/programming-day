#include<iostream>
using namespace std;
void challan(int x);
int x;
main()
{
cout << "enter the  speed of car";
cin >> x;
challan(x);
}
void challan(int x)
{
if(x>105)
{
cout << "halt..YOU WILL BE CHALLANGED!!!";
}
if(x<100)
{
cout << "PERFECT!YOUR ARE GOOD";
}
}