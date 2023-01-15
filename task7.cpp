#include<iostream>
using namespace std;
string come(int hour1, int mint1, int hour2, int mint2);
main()
{
    int hour1;
    int mint1;
    int hour2;
    int mint2;
    string is;
    cout << "Enter the timinig of the exam in hours:";
    cin >> hour1;
    cout << "Enter the timing of the exam in mintue:";
    cin >> mint1;
    cout << "Enter the timing of student in hour:";
    cin >> hour2;
    cout << "Enter the timing of student in mintues:";
    cin >> mint2;
    is=come(hour1, mint1, hour2, mint2);
    cout << is;
}
string come(int hour1, int mint1, int hour2, int mint2)
{
    string text;
    if(hour1==hour2 && mint1==mint2)
    {
        text="You are arrival in time:";
    }
    if(hour1==hour2 && mint1<mint2)
    {
        text="You are late.";
    }
    if(hour1<hour2 && mint1<mint2)
    {
        text="you are late.";
    }
    if(hour1>hour2 && mint1<mint2)
    {
        text="you are coming too early";
    }
    return text;
}