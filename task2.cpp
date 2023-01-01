#include<iostream>
using namespace std;
void product(int number1,int number2);
main()
{
int number1;
int number2;
cout << "enter number:";
cin >> number1;
cout << "enter number:";
cin >> number2;
product(number1,number2);
}
void product(int number1,int number2)
{
int product;
product=number1*number2;
cout << "product is:" << product;
}