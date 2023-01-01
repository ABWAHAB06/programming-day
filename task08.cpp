#include<iostream>
#include<windows.h>
using namespace std;
void checksit(int x, int y);
main()
{
int num1;
int num2;
cout << "enter first number";
cin >> num1;
cout << "enter second number";
cin >> num2;
checksit(num1, num2);
}



void checksit(int x, int y)
{
if(x==y)
{
cout << "true";
}
if(x!=y)
{
cout << "false";
}
}