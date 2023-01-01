#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int);
void printName();
main()
{
system("cls");
printName();
}
void printName()
{
gotoxy(50,25);

cout << "          #    ##########      " << endl;
gotoxy(50,26);
cout << "        ## ##  #        #  " << endl;
gotoxy(50,27);
cout << "       ##   ## #        # " << endl;
gotoxy(50,28);
cout << "       ##   ## #        #" << endl;
gotoxy(50,29);
cout << "       ####### ##########      " << endl;
gotoxy(50,30);
cout << "       ##   ## #        #      " << endl;
gotoxy(50,31);
cout << "       ##   ## #        # " << endl;
gotoxy(50,32);
cout << "       ##   ## ########## " << endl;
gotoxy(50,33);
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}