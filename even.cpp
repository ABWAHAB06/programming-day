#include<iostream>
using namespace std;
void check(int number);
int number;
main()
{
cout << "enter the number";
cin >> number;
check(number);
}
void check(int number)
{
if(number%2==0)
{
cout << "you enter even number";
}
if(number%2==1)
{
cout << "you enter odd number";
}
}