#include<iostream>
using namespace std;
main()
{
int time;
float acceleration;
float initialvelocity;
float finalvelocity;
cout << "enter acceleration";
cin >> acceleration;
cout << "enter time";
cin >> time;
cout << "enter initialvelocity";
cin >> initialvelocity;
finalvelocity=acceleration*time+initialvelocity;
cout << "final velocity:" << finalvelocity;
}