#include<iostream>
using namespace std;
char grade(string student, string sub1, string sub2, string sub3, string sub4, string sub5,float total,float percentage,float su1,float su2,float su3,float su4,float su5);
main()
{
    string student, sub1, sub2, sub3, sub4, sub5;
    float su1, su2, su3, su4, su5;
    float total;
    float percentage;
    char result;
    cout << "enter the student name:";
    cin >> student;
    cout << "enter the first subject name:";
    cin >> sub1;
    cout << "enter the subject one marks:";
    cin >> su1;
    cout << "enter the second subject name:";
    cin >> sub2;
    cout << "enter the subject two marks:";
    cin >> su2;
    cout << "enter the third subject name:";
    cin >> sub3;
    cout << "enter the third subject marks:";
    cin >> su3;
    cout << "enter the forth subject name:";
    cin >> sub4;
    cout << "enter the forth subject marks:";
    cin >> su4;
    cout << "enter the fifth subject name:";
    cin >> sub5;
    cout << "enter the fifth subject  marks:";
    cin >> su5;
    total=su1+su2+su3+su4+su5;
    cout << total << "is your total marks:" << endl;
    percentage=(total/550)*100;
    cout << "is your percentage: ";
    cout << percentage;
   result= grade(student, sub1, sub2, sub3, sub4, sub5, total, percentage, su1, su2, su3, su4, su5);
   cout << result << "is your grade:";
}
char grade(string student, string sub1, string sub2, string sub3, string sub4, string sub5,float total,float percentage,float su1,float su2,float su3,float su4,float su5)
{
    char value;
    if(percentage>=90 && percentage<=100)
    {
        value='A';
    }
    if(percentage>=70 && percentage<=89)
    {
        value='B';
    }
    if(percentage>=60 && percentage<=69)
    {
        value='C';
    }
    if(percentage>=50 && percentage<=59)
    {
        value='D';
    }
    if(percentage>=40 && percentage<=49)
    {
        value='E';
    }
    if(percentage<40)
    {
        value='F';
    }
    cout << value << endl;
    return value;
}