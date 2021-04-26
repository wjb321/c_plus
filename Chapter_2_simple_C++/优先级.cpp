//三元运算符
#include<iostream>
using namespace std;

int main()
{
	int a = 1, b=2,	c =0;
	c= (a>b) ? (a-b) :(a+b);//满足条件用冒号前面的方法，否则用后面的方法
	cout<< c<<endl;
	cout<< sizeof(c)<<endl;
	return 0;
}

/*
下来就是位操作，分别包含
与&， 或|，异或（^），按位取反（~），左右移位（<<, >>）,其中左移是高位丢弃，低位补零，右移是移出位丢弃，如果是无符号数，则高位补0，如果是符号数，则高位数补符号位，或者补0.

数据类型转换存在两种形式：
1）隐式转换，即自动转向表达式中数据类型高的情况，比如，数据a 为double，b为 long double， 那么经过对两个的操作，数据类型整体会变成long double
2）显式转换，即所谓的强行转换： a = int(b)
*/