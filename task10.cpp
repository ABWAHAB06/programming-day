#include<iostream>
using namespace std;
void way(string countryname, float ticketprice, float finalprice);
main()
{
string countryname;
float ticketprice;
float finalprice;
while(true)
{
cout << "enter countryname" << endl;
cin >> countryname;
cout << "enter the ticketprice in dollars" << endl;
cin >> ticketprice;
way(countryname, ticketprice, finalprice);
}
}
void way(string countryname, float ticketprice, float finalprice)
{
if(countryname=="pakistan")
{
finalprice=ticketprice*0.95;
cout << finalprice;
}
if(countryname=="ireland")
{
finalprice=ticketprice*0.90;
cout << finalprice;
}
if(countryname=="england")
{
finalprice=ticketprice*0.70;
cout << finalprice;
}
}