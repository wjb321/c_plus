#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"please input a and b:";
	cin>>a>>b;
	//cout <<"why here is no reaction?";
    c = a+ b;
	cout<<setw(5)<<setprecision(3)<<c<<endl;
	return 0;
}








