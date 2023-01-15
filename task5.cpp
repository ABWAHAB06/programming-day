#include<iostream>
using namespace std;
float amount(string fruit, string day, int numb);
main()
{
    string fruit, day;
    int numb;
    float result;
    cout << "Enter the name of fruit:";
    cin >> fruit;
    cout << "Enter the name of the day:";
    cin >> day;
    cout << "Enter the numbers of the fruits:";
    cin >> numb;
    result=amount(fruit, day, numb);
    cout << result;
}
float amount(string fruit, string day, int numb)
{
    float price;
    if(fruit=="orange" && day=="monday" || day=="tuesday" || day=="wednesday" || day=="thrusday" || day=="friday")
    {
        price=0.85*numb;
    }
    if(fruit=="orange" && day=="satuarday" || day=="sunday")
    {
        price=0.90*numb;
    }
    if(fruit=="banana" && day=="monday" || day=="tuesday" || day=="wednesday" || day=="thrusday" || day=="friday")
    {
        price=2.50*numb;
    }
    if(fruit=="banana" && day=="saturday" || day=="sunday")
    {
        price=2.70*numb;
    }
    if(fruit=="apple" && day=="monday" || day=="tuesday" || day=="wednesday" || day=="thrusday" || day=="friday")
    {
        price=1.20*numb;
    }
    if(fruit=="apple" && day=="saturday" && day=="sunday")
    {
        price==1.25*numb;
    }
    return price;
}