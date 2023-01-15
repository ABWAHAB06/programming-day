#include<iostream>
using namespace std;
float bill(string code, string time, int mint);
main()
{
    string code;
    string time;
    int mint;
    float charges;
    cout << "enter which type of coustmer you are (Residental or Premium";
    cin >> code;
    cout << "enter your time (day or night)";
    cin >> time;
    cout << "enter the mintues you used the service:";
    cin >> mint;
    charges=bill(code, time, mint);
    cout << "Your Bill is $" << charges;
}
float bill(string code, string time, int mint)
{
    float amount;
    if(code=="Residental" && time=="day" && mint<=75)
    {
        amount=0.0;
    }
    if(code=="Residental" && time=="day" && mint>75)
    {
        amount=(10.0*0.10)*mint;
    }
    if(code=="Premium" && time=="night" && mint<=100)
    {
        amount=0.0;
    }
    if(code=="Premium" && time=="night" && mint>100)
    {
        amount=(25.0*0.05)*mint;
    }
    return amount;
}