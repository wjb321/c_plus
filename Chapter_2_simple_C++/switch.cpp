#include<iostream>
using namespace std;
int main()
{
	int day;
    
    while(1)
    {
    cin >>day;
    switch(day)
    {
    	case 0:
    	     cout <<"sunday"<<endl;
    	     break;
    	case 1:
    	     cout <<"Monday"<<endl;
    	     break;
    	case 2:
    	     cout <<"Tuesday"<<endl;
    	     break;
    	case 3:
    	     cout <<"Wensday"<<endl;
    	     break;
    	case 4:
    	     cout <<"Thursday"<<endl;
    	     break;
    	case 5:
    	     cout <<"Friday"<<endl;
    	     break;
    	case 6:
    	     cout <<"Saturday"<<endl;
    	     break;
    }
    }
 return 0;
}