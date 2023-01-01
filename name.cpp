#include<iostream>
using namespace std;
void add();
void product();
main()
{
add();
product();
}
void add()
{
int n1,n2,sum;
cout << "enter first number";
cin >> n1;
cout << "enter second number";
cin >> n2;
sum=n1+n2;
cout << "sum is:" << sum << endl;
}
void product()
{
int n3,n4,product;
cout << "enter third number";
cin >> n3;
cout << "enter fourth number";
cin >> n4;
product=n3*n4;
cout << "product is:" << product;
}