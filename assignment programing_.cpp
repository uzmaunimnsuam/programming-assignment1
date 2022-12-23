#include<iostream>
using namespace std;
int sum(int a,int b);
int diff(int a,int b);
int multiple (int a,int b);
float division (float a, float b);
int remainder (int a,int b);
float log(float a);
float sqrt(float b);
int main()
{
int a,b,add,sub,product,quotient,modules,result,root;
cin>>a>>b;
add=sum(a,b);
sub=diff(a,b);
product=multiple(a,b);
quotient=division(a,b);
modules=remainder(a,b);
result=log(a);
root=sqrt(b);
cout<<"add="<<add<<endl;
cout<<"sub="<<sub<<endl;
cout<<"product="<<product<<endl;
cout<<"quotient="<<quotient<<endl;
cout<<"modules="<<modules<<endl;
cout<<"log of"<<a<<"is="<<result<<endl;
cout<<"square root of"<<b<<"is="<<root<<endl;
return 0;
}
int sum(int a,int b)
{
return (a+b);
}
int diff(int a,int b)
{
return (a-b);
}
int multiple(int a,int b)
{
return (a*b);
}
float division(float a, float b)
{
return (a/b);
}
int remainder(int a,int b)
{
return (a%b);
}
float log(float a)
{
return (a);
}
 float sqrt(float b)
{
return b;
}
    