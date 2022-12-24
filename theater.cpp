#include<iostream>
using namespace std;
main()
{
string movie;
float addult_ticket_price;
float child_ticket_price;
float addult_ticket_sold;
float child_ticket_sold;
float percentage_charity;
float amount_after_charity;
float total_amount;
cout << "enter movie name";
cin >> movie;
cout << "enter addult ticket price" << endl;
cin >> addult_ticket_price;
cout << "enter child ticket price" << endl;
cin >> child_ticket_price;
cout << "addult ticket sold" << endl;
cin >> addult_ticket_sold;
cout << "child ticket sold" << endl;
cin >> child_ticket_sold;
cout << "enter percentage charity" << endl;
cin >> percentage_charity;
total_amount=(addult_ticket_price*addult_ticket_sold)+(child_ticket_price*child_ticket_sold);
cout << "total amount generated" << total_amount << endl;
amount_after_charity=total_amount/percentage_charity*100;
cout << "amont after donation" << amount_after_charity;
}