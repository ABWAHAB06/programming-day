#include<iostream>
#include<windows.h>
using namespace std;
void printmenu();
void printaggregate();
void printcompare();
string name;
int matricmarks;
int intermarks;
int ecatmarks;
float aggregate;
string std1;
string std2;
int ecat1;
int ecat2;
main()
{
printmenu();
printaggregate();
printcompare();
}
void printmenu()
{
cout << "***************************************" << endl;
cout << "*                                     *" << endl;
cout << "*  university admission system        *" << endl;
cout << "*                                     *" << endl;
cout << "*                                     *" << endl;
cout << "***************************************" << endl;
}
void printaggregate()
{
cout << "enter your name:";
cin >> name;
cout << "enter your matric marks:";
cin >> matricmarks;
cout << "enter your inter marks:";
cin >> intermarks;
cout << "enter your ecat marks";
cin >> ecatmarks;
aggregate=((matricmarks*0.30/1100)+(intermarks*0.40/1100)+(ecatmarks*0.50/400))*100;
cout << "your aggregate is:" << aggregate << endl;
}
void printcompare()
{
cout << "enter first student name";
cin >> std1;
cout << "enter first student ecat marks";
cin >> ecat1;
cout << "enter second student name";
cin >> std2;
cout << "enter second student ecat marks";
cin >> ecat2;
if(ecat1>ecat2)
{
cout <<std1<<"has roll no 1";
}
if(ecat1<ecat2)
{
cout <<std2<<"has roll no 2";
}
}
