#include<iostream>
using namespace std;
void flowerprice(float numberRR, float numberWR, float numberTR);
main()
{
float numberofredrosessold;
float numberofwhiterosesold;
float numberoftuliprosesold;
cout << "enter number of red roses sold" << endl;
cin >> numberofredrosessold;
cout << "enter number of white roses sold" << endl;
cin >> numberofwhiterosesold;
cout << "enter number of tulip roses sold" << endl;
cin >> numberoftuliprosesold;
flowerprice(numberofredrosessold, numberofwhiterosesold, numberoftuliprosesold);
}
void flowerprice(float numberRR, float numberWR, float numberTR)
{
float totalprice;
float discount;
float RRprice=2;
float WRprice=4.1;
float TRprice=2.5;
totalprice=(numberRR*2)+(numberWR*4.1)+(numberTR*2.5);
if(totalprice>200)
{
totalprice=totalprice*0.8;
discount=totalprice*0.2;
cout << "total price is" << totalprice << endl;
cout << "discount is" << discount << endl;
}
if(totalprice<=200)
{
cout << "no discount" << totalprice;
}
}
