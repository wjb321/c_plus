#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int year;
	bool isLeapYear;
	cout<<"enter the year:";
	cin >> year;
    isLeapYear = ((year %4==0 && year%100!=0) || (year%400==0));
	if(isLeapYear)
		cout <<year<<"is a leap year"<<endl;
	else 
		cout << year <<setw(5)<<" is not a leap year"<<endl;//加入setw表示有一定的空格

return 0;

}