#include<iostream>
using namespace std;
main()
{
int a;
int b;
int c;
cout << "enter a four digit number";
cin >> a;
b=a*7/100;
c=b%a;
cout << "output is" << c;
}