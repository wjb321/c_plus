#include<iostream>
using namespace std;

#if 0
int main()
{
	int a;
	cout <<"inpout integer number:"<<endl;
	cin >> a;
	cout << "Number"<< a << "factors"<<endl;
	for(int k=1;k<=a;k++)
		if(a%k ==0)
			cout<< k<<" ";
	cout<<endl;
	return 0;

}
#endif
//for(a; b<a; b++)，构造一个基本的for循环

#if 0

int main()
{
const int N =4 ;
for (int i =1 ; i<=N; i++)
  {
  	for(int j =1; j<=30;j++)
   	 cout<< " ";
   	for(int j =1; j<=8-2*i; j++)
   		cout <<" ";
   	for(int j =1; j<=2*i-1; j++)
   		cout <<"*";
   	    cout <<endl;
  }
   
for (int i =1 ; i<=N-1; i++)
  {
  	for(int j =1; j<=30;j++)
   	 cout<< " ";
   	for(int j =1; j<=7-2*i; j++)
   		cout <<"*";
   	    cout <<endl;
  }

}
#endif

#if 1
int main(void)
{
	float a,x,y;
	for(y=1.5f; y>-1.5f; y-=0.1f)
	{
		for(x=-1.5f; x<1.5f; x+=0.05f)
		{
			a = x*x+y*y-1;
			//这里的@符号即为打印出的心形图案符号，可更改
			char ch = a*a*a-x*x*y*y*y<=0.0f?'*':' '; 
			putchar(ch);  
			//或者putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}
	
	return 0;
}
#endif








