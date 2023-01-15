#include<iostream>
using namespace std;
string star(string zodic, string month, int date);
main()
{
    string zodic;
    string month;
    int date;
    string result;
    cout << "Enter the zodic sign:";
    cin >> zodic;
    cout << "Enter the month name:";
    cin >> month;
    cout << "Enter the date:";
    cin >> date;
    result=star(zodic, month, date);
    cout << result << "\t" << "is your star.";
}
string star(string zodic, string month, int date)
{
    string symbol;
    if(zodic=="Aries" && month=="March" && date>=21 || month=="April" && date<=19)
    {
        symbol="THE RAM";
    }
    if(zodic=="Taurus" && month=="April" && date>=21 || month=="May" && date<=20)
    {
        symbol="THE BULL";
    }
    if(zodic=="Gemini" && month=="May" && date>=21 || month=="June" && date<=20)
    {
        symbol="THE TWINS";
    }
    if(zodic=="Cancer" && month=="June" && date>=21 || month=="July" && date<=22)
    {
        symbol="THE CRAB";
    }
    if(zodic=="Leo" && month=="July" && date>=23 || month=="August" && date<=22)
    {
        symbol="THE LION";
    }
    if(zodic=="Virgo" && month=="August" && date>=23 || month=="September" && date<=22)
    {
        symbol="THE VIRGIN";
    }
    if(zodic=="Libra" && month=="September" && date>=23 || month=="October" && date<=22)
    {
        symbol="THE SCALES";
    }
    if(zodic=="Scorpio" && month=="October" && date>=23 || month=="November" && date<=21)
    {
        symbol="THE SCORPION";
    }
    if(zodic=="Sagittarius" && month=="November" && date>=22 || month=="December" && date<=21)
    {
        symbol="THE ARCHER";
    }
    if(zodic=="Capricorn" && month=="December" && date>=22 || month=="Janurary" && date<=19)
    {
        symbol="THE GOAT";
    }
    if(zodic=="Aquarius" && month=="Janurary" && date>=20 || month=="Feburary" && date<=18)
    {
        symbol="THE WATER BEARER";
    }
    if(zodic=="Pisces" && month=="Feburary" && date>=19 || month=="March" && date<=20)
    {
        symbol="THE FISHES";
    }
    return symbol;
}