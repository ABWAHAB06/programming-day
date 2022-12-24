#include<iostream>
using namespace std;
main()
{
string name;
int sum;
float percentage;
int marks;
cout << "enter your name";
cin >> name;
cout << "enter subject 1 marks:";
cin >> marks;
cout << "enter subject 2 marks:";
cin >> marks;
cout << "enter subject 3 marks:";
cin >> marks;
cout << "enter subject 4 marks:";
cin >> marks;
cout << "enter subject 5 marks:";
cin >> marks;
sum=marks+marks+marks+marks+marks+marks;
percentage=sum/500*100;
cout << "your percentage:" << percentage;
}