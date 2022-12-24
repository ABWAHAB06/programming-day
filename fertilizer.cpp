#include<iostream>
using namespace std;
main()
{
float area,size,cost,cost_per_pound,cost_of_fert;
cout << "enter size of fertilizer bag";
cin >> size;
cout << "enter cost of bags";
cin >> cost;
cout << "enter area";
cin >> area;
cost_per_pound=cost/size;
cost_of_fert=cost/area;
cout << "cost of fertilizer per pound" << cost_per_pound << endl;
cout << "cost of fertilizing  area" << cost_of_fert;
}