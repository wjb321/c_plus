/*
2.1 C++的特点和有点
C++ 是面向对象的一种方法。将数据和对数据的操作方法封装在一起，然后可以通过外部访问内部方法。
对于同类型对象抽象出其共性，形成类。类中的大部分数据，只能用本类的方法进行处理。类通过简单的
外部接口与外界发生关系，对象与对象之间通过信息进行通信，

2.2 标识符是否合法
标识符是程序员定义的单词，其命名程序正文中的一些实体，如函数名，变量名，类名，对象名等。其规则如下：
a.以大写字母，小写字母或者下划线开始
b.可以由以大写字母，小写字母，下划线或数字组成
c.大写小写字母代表哦不同的标识符
d.不能选择C++的关键字

#include<iostream> 
//指示编译器在对程序预处理时，将文件iostream中的代码镶嵌到程序中该指令所在的地方，其中#include被称为与预处理指令。
//文件iostream中生命了程序所需的输入和输出操作的有关信息。cout和<<操作有关信息就是在该文件中声明的。
using namespace std;
//是针对命名空间的指令
int main()
{
cout<<"hello"<<endl;//在程序中输出相应的操作
cout<<"let's learn C++"<<endl;
return 0;
}
*/
//2.4-
#include<iostream>
#include<cmath>
using namespace std;
#if 0
const float PI=3.14;
float a;
int b, c, d, n;
enum Color {white, black=100, red, blue, green =300};
int main()
{
a = PI;
b = 30;
c = b++;//c = 30
d = ++b;//c = 32
cout<<PI<<endl;
cout<<a<<endl;
cout<<red<<endl;//直接是在black之后加入1，得到red=101
cout<<201/4<<endl;//50---由于分母是整数，所以其结果是整数
cout<<201%4<<endl;//1--求余，所以其余数是1
cout<<201/4.0<<endl;//50.25--分母是小数，所以其结果是整体求解，是小数 
cout<<"b="<<b<<endl;//是d的值
cout<<"c="<<c<<endl;//因为先赋值后加1
cout<<"d="<<d<<endl;//先加1后赋值
for(n=0;n<10;n++)
{cout<<"n="<<n<<endl;}
cout<<n<<endl;
return 0;
}
#endif
//2.12
// for, while, do...while()
#if 0
int n,a=10,b=10;
int main()
{
for(n=10;n<20;n+=2)
  {
  	cout<<"n="<<n<<endl;
  }

 while(a<20)
  {
   //if (a<200)
  	cout<<"a="<<a<<endl;
  	a+=2;
  }
  do
  {
  	cout<<"b="<<b<<endl;
  	b+=2;
  }while(b<20);
}
#endif
//2-16
#if 0
int c;
int main()
{
	cin>>c;
	cout<<c<<endl;
	return 0;
}
#endif

#if 0
int main(void)
{
char x;
for(x=32;x<=126;x++)
 {
 	cout<<x<<" ";
 }
return 0;
}
#endif
//2-19
#if 0
int main()
{
unsigned int x;
unsigned int y =100;
unsigned int z =50;
int a;
int b = 100;
int c = 50;
x = y-z;
cout<<"x="<<x<<endl;
x = z-y;
cout <<"x="<<x<<endl;
a =b-c;
cout<<"a="<<endl;
a = c -b;
cout<<"a="<<a<<endl;
return 0;
}
#endif
#if 0
//2-22,位操作
int a=1,b=2, c =3;
int d = a^b;
int main()
{
cout<<(2<3 &&6<9)<<endl; // it is 1, bucause it is true
cout<<(!(4<7))<<endl;//it is 0, cause it is false
cout<<(!(3>5)||(6<2))<<endl;//true or false, so it is true.
cout<<"a|b-c:"<<(a|b-c)<<endl;//1|2-3 = -1
cout<<"a^b&-c:"<<(a^b&-c)<<endl;//1^2&-3 = 
cout<<"a^b:"<<(a^b)<<endl;
cout<<"d&-c:"<<(d&-c)<<endl;
cout<<"b&-c:"<<(b&-c)<<endl;
cout<<"3&-3:"<<(3&-3)<<endl;
cout<<"a&b|c:"<<(a&b|c)<<endl;
cout<<"a|b&c:"<<(a|b&c)<<endl;
cout<<"!a|a:"<<(!a|a)<<endl;
cout<<"~a|a:"<<(~a|a)<<endl;
cout<<"a^a:"<<(a^a)<<endl;
cout<<"a>>2:"<<(a>>2)<<endl;
return 0;
}
#endif
//2-26,条件显示
#if 0
int main()
{
char a;
while(1)
{
cout<<"现在正在下雨吗"<<endl;
cout<<"please input yes/no"<<endl;
cin>>a;
 if(a =='Y')
 {
  cout<<"现在正在下雨"<<endl;
  continue;
 }
 else if(a=='N')
 {
  cout<<"现在没有下雨"<<endl;
  continue;
  }
 else
 {
  cout<<"现在正在下雨吗"<<endl;
  continue;
 }
}

}

#endif
//2-29,while，for，do..while实现质数的列举
#if 0
int main()
{
  int i,j;
  for(i=1;i<101;i++)
  {
    bool flag = true;
    for(j=2;j<i;j++)
    {
    if(i%j==0)
     {
      flag = false;
      break;
     }
    }
  if(flag ==true)
    cout<<i<<" "; 
  }
}
#endif
#if 0
int main()
{
  int i,j,k,flag;
  i=2;
  while(i<=100)
  {
    flag=1;
    int k=(int)sqrt((float)i);
    j=2;
    while (j<=k)
    {
      if(i%j==0)
      {
        flag=0;
        break;
      }
      j++;
    }
    if (flag)
      cout<<i<<"是质数."<<endl;
    i++;
  }
  return 0;
}
#endif
//while实现的质数
#if 0
int main()
{
  int i=1,j,k;
  //j=2;//这个放在外面的时候是就是直接打印所有数字
  //如果放在外面，由于while循环内部会一直跟进j++，所以都是满足条件的
  //所以每次执行大while循环的时候需要保持j=2的表述。
  bool flag;
  while(i<101)
  {
    flag =true;
    k = (int)sqrt((float)i);
    j = 2;
    while(j<=k)
    {
       if(i%j==0)
      {
       flag = false;
       break;
      }
     j++;
    }
    if(flag)
    {
      cout<<i<<" ";
    } 
    i++;
  }

  return 0;
}
#endif
//do..while()实现函数
#if 0
int main()
{
  int i=1,j,k;
  //j=2;//这个放在外面的时候是就是直接打印所有数字
  bool flag;
  do{
    flag =true;
    k =(int)sqrt((float)i);
    j=2;
    do{
       if(i%j==0)
      {
       flag = false;
       break;
      }
     j++;
    }while(j<=k);
  if(flag)
   {
    cout<<i<<" ";
   } 
  i++;
  }while(i<101);
return 0;
}
#endif
//随意生成一个数据，然后对数字进行猜测
#if 0
 int GetRandomNumber()
 {
  int RandomNumber;
  srand((unsigned)time(NULL));//time()用系统时间初始化种。为rand()生成不同的随机种子。
  RandomNumber = rand() % 100 + 1;//生成1~100随机数
  //cout<<RandomNumber<<endl;
  return RandomNumber;
}

int main()
 
 {
  int a,b;
  a=GetRandomNumber();
  while(1)
{
  cout<<"input a value:"<<endl;
  cin>>b;
  if(a>b)
   {
    cout<<"a大于b"<<endl;
    //break;
   }
  else if(a<b)
   {
    cout<<"b大于a"<<endl;
    //break;
   }
  else
   {
    cout<<"您猜对了:"<<b<<endl;
    break;
   }
}
 
 
}
#endif
//2-34通过枚举的形式去不同的球。
/*
口袋中有红、黄、蓝、白、黑五种颜色的球若干个，每次从口袋中取三个不同颜色的球，统计并输出所有的取法。
分析：由于球只能是五种颜色之一，故可用枚举类型表示球的颜色。设取出的球为i、j、k，根据题意，i、j、k
分别可以有五种取值，且i≠j≠k。可以用穷举法，逐个检验每一种可能的组合，从中找出符合要求的组合并输出。
*/
#if 0
#include<iomanip>
int main(){
    enum color_set {red,yellow,blue,white,black}; //声明枚举类型color
    color_set color; 
    int i,j,k,counter=0,loop; //counter是累计不同颜色的组合数
    for(i=red;i<=black;i++) {
        for(j=red;j<=black;j++) {
            if(i!=j){                        //前两个球颜色不同
                for(k=red;k<=black;k++)
                if(k!=i&&k!=j){        //第三个球不同于前两个，满足要求
                    counter++;
                    if((counter)%22==0){ //每屏显示22行
                        cout<<"请按回车键继续";
                        cin.get();
                    }
                    cout<<setw(15)<<counter;
                    /*下面输出每种取法，一行为一种取法的三个颜色*/
                    for(loop=1;loop<=3;loop++){
                        switch(loop){
                            case 1: color=(color_set) i; break;    //第一个是i
                            case 2: color=(color_set) j; break;    //第二个是j
                            case 3: color=(color_set) k; break;    //第三个是k
                        }
                        switch(color){
                            case red:   cout<<setw(15)<<"red";   break;
                            case yellow:cout<<setw(15)<<"yellow";break;
                            case blue:  cout<<setw(15)<<"blue";  break;
                            case white: cout<<setw(15)<<"white"; break;
                            case black: cout<<setw(15)<<"black"; break;
                        }
                    }
                    cout<<endl;            //输出一种取法后换行
                }
            }
        }
    }
    cout<<"共有："<<counter<<"种取法"<<endl;
    return 0;
}
#endif
#if 0
//2-35乘法口诀打印
int main(void)
{
    int i,j;
    for(i=1;i<10;i++)
     {   
       for(j=1;j<=i;j++)
         cout<<j<<"*"<<i<<"="<<i*j<<endl;
         cout<<"\n";
     }
    return 0;
}
#endif

#if 1
int main()
{
  int i,j;
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
      cout<<i<<"*"<<j<<'='<<i*j<<endl;
      cout<<'\n';
  }
  return 0;
}
#endif







