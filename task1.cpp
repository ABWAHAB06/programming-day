#include<iostream>
using namespace std;
string weather(string temp, string air);
main()
{
    string temp;
    string air;
    string result;
    cout << "enter the tempurature:";
    cin >> temp;
    cout << "enter the air type:";
    cin >> air;
   result= weather(temp, air);
   cout << result;
}
string weather(string temp, string air)
{
    string check;
    if(temp=="warm" && air=="dry")
    {
        check="play tenis";
    }
    if(temp=="warm" && air=="humid")
    {
        check="swim";
    }
    if(temp=="cold" && air=="dry")
    {
        check="play basketball";
    }
    if(temp=="cold" && air=="humid")
    {
        check="watch tv";
    }
    return check;
}