#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


int main()
{
cout << "test";
gotoxy(16,16);
cout << "my name is wahab";
return 0;
}