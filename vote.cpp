#include<iostream>
using namespace std;
void iseligible(int age);
main()
{
int age;
cout << "enter your age";
cin >> age;
iseligible(age);
}
void iseligible(int age)
{
    if(age>=18)
{
    cout << "your are eligible to vote" << endl;
}
if(age<=18)
{
cout << "you are not eligible to vote" << endl;
}
}
