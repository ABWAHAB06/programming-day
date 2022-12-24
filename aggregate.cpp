#include<iostream>
using namespace std;
main()
{
float aggregate;
string name;
int matric marks;
int inter marks;
int ecat marks;
float matric pct;
float inter pct;
float ecat pct;
cout << "enter your matric marks";
cin >> matric marks;
cout << "enter your inter marks";
cin >> inter marks;
cout << "enter the ecat marks";
cin >> ecat marks;
float matric pct=matric marks*10/1100;
float inter pct=inter marks*40/550;
float ecat pct=ecat marks*50/400;
aggregate=matric pct+inter pct+ecat pct;
cout << "your aggregate is:" << aggregate;
}