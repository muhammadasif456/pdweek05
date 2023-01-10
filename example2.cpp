#include<iostream>
using namespace std;
int isgreater(int number1,int number2);
int  minumum(int number1, int number2);
main()
{
int greater;
int minum;
greater=isgreater(55,45);
cout<<"number is greater in..."<<greater<<endl;
minum=minumum(23,34);
cout<<"minumum numberis "<<minum;
}
int isgreater(int number1, int number2)
{
 if(number1>number2)
 {
  return number1;
 }
 if(number2>number1)
 {
  return number2;
 }
}
 int minimum(int number1, int number2)
{
 if(number1<number2)
 {
 return number1;
 }
 if(number2<number1)
 {
 return number1; 
 }
 return 0;
}