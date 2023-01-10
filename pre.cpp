#include<iostream>
#include<cmath>
using namespace std;

main()
{
 int num1;
 int num2;
 int result;
 int result1;
 float sqrt1;
 float cube;
 float power;
 float ceil1;
 float flor;
 cout<<"enter number"<<endl;
 cin>>num1;
 cout<<"enter number"<<endl;
 cin>>num2;

 result=max(num1,num2);
 result1=min(num1,num2);
 cout<<"max is.."<<result<<endl;
 cout<<"min is..."<<result1<<endl;
 sqrt1=sqrt(4);
 cout<<"sqt is..."<<sqrt1<<endl;
 cube=cbrt(8);
 cout<<"cube root is"<<endl;
 power=pow(2,8);
 cout<<"2 power 8 is..."<<power<<endl;
 ceil1=ceil(7.99);
 cout<<"ceiling is.."<<ceil1<<endl;
 flor=floor(7.99);
 cout<<"floor of number is..."<<flor;
    
 

}
 