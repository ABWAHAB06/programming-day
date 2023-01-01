#include<iostream>
using namespace std;
void sub(int number1,int number2);
main()
{
int number1;
int number2;
cout << "enter number:";
cin >> number1;
cout << "enter number:";
cin >> number2;
sub ( number1, number2);
cout << "enter operator(+,-,*,/):";
cin >> operation;
}
void sub(int number1,int number2)
{
int subt;
subt=number1-number2;
cout << "subt is:" << subt;
}