#include<iostream>
using namespace std;
string come(int height, int coord1, int coord2);
int area;
main()
{
    int height, coord1, coord2;
    int area;
    string yes;
    cout << "enter the height please:";
    cin >> height;
    cout << "Enter the x coordinate of table:";
    cin >> coord1;
    cout << "Enter the y coordinate of table:";
cin >> coord2;
    area==2;
    yes=come(height, coord1, coord2);
    cout << yes;
}
string come(int height, int coord1, int coord2)
{
    string text;
    if(height==area && coord1==1 && coord2==1 )
    {
        text="Border";
    }
    if(height==area && coord1==1 && coord2==2)
    {
        text="one point upward";
    }
    if(height==area && coord1==2 && coord2==3)
    {
        text="border";
    }
    if(height==area && coord1==3 && coord2==4)
    {
        text="Center";
    }
    if(height==area && coord1==4 && coord2==5)
    {
        text="outside";
    }
return text;
}