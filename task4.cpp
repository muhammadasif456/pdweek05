#include<iostream>
#include<cmath>
using namespace std;
int iseven(int number);
main()
{
 int number;
 int number1;
 number1=iseven(number);
 if(number1%2==0)
 {
  cout<<"evenish behaviour"<<endl;
 }
 if(number1%2==1)
 {
 cout<<"the number is odish"<<endl;
 }
 }
 int iseven(int number)
 {
 int a;
 int b;
 int c;
 int number3;
 cout<<"enter the first digit"<<endl;
 cin>>a;
 cout<<"enter the second digit"<<endl;
 cin>>b;
 cout<<"enter the third digit"<<endl;
 cin>>c;
 number3=a+b+c;
 cout<<"your number is...."<<a<<b<<c<<endl;
 cout<<"your digit sum is..."<<number3<<endl;
 return number3;
}