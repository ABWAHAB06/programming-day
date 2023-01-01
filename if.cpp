#include<iostream>
using namespace std;
main()
{
int marks;
while(true)
{
cout << "enter your marks";
cin >> marks;
if(marks<=50)
cout << "pass";
if(marks>=90)
cout << "fail";
}
}