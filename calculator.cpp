#include<iostream> 
using namespace std;
long exp(int a, int b)
{
long d=1;
for(int i=1;i<=b;i++)
{
d=d*a;
}
return d;
}
long fac(int a)
{
 int p=1;long d=1;
  int result;
 while(p<=a)
 {
d=d*p;p++;
 }
return d;
}
double taylorsin(double p,int terms)
{double d=0;
    for(int i=1;i<=terms;i++)
    {
        d=d+((exp(-1,i+1))*(exp(p,2*i-1)))/(double)(fac(2*i-1));
    }
return d;
}
double taylorcos(double p,int terms)
{
    double d=0;
    for(int i=0;i<terms;i++)
    {
        d=d+((exp(-1,i))*(exp(p,2*i)))/(double)(fac(2*i));
    }
    return d;
}
double taylortan(double a, int terms)
{
double d= taylorsin(a,terms)/taylorcos(a,terms);
return d;
}
int main()
{  
double a,b;
cout<<"Enter operator(+,-,x,/,^,!,s,c,t)"<<endl;
char c;
cin>>c;
switch (c)
{
case '+':
{
cout<<"Enter 2 numbers ";
cin>>a>>b;
cout<<"Result is:"<<a+b;
    break;
    }
case '-':
{
cout<<"Enter 2 numbers ";
cin>>a>>b;
cout<<"Result is:"<<a-b;
 break;
 }
case 'x':
{
cout<<"Enter 2 numbers ";
cin>>a>>b;
cout<<"Result is:"<<a*b;
 break;
 }
case '/':
{
cout<<"Enter 2 numbers ";
cin>>a>>b;
cout<<"Result is:"<<a/b;
 break;
 }
 case '!':
 {
 cout<<"Enter a number whose factorial is to be calculated"<<endl;
 cin>>a;
 cout<<"Factorial is "<<fac(a);
 break;
 }
case '^':
{
cout<<"Enter 2 numbers"<<endl;
cin>>a>>b;
cout<<"a^B is "<<exp(a,b);
 break;
 }
 case 's':
 {
    cout<<"Enter the angle in radian"<<endl;
    cin>>a;
    cout<<"Enter number of terms of taylor series to be used"<<endl;
    int terms;
    cin>>terms;
    cout<<"sin value of input is "<<taylorsin(a,terms);
 }
 break;
 case 'c':
 {
     cout<<"Enter the angle in radian"<<endl;
    cin>>a;
    cout<<"Enter number of terms of taylor series to be used"<<endl;
    int terms;
    cin>>terms;
    cout<<"cos value of input is "<<taylorcos(a,terms);
 }
 break;
 case 't':
 {
     cout<<"Enter the angle in radian"<<endl;
    cin>>a;
    cout<<"Enter number of terms of taylor series to be used"<<endl;
    int terms;
    cin>>terms;
    cout<<"tan value of input is "<<taylortan(a,terms);
 }
 break;
default: 
cout<<"Wrong input";
    break;
 }
return 0;
}