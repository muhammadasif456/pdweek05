#include<iostream>
using namespace std;
int add( int number1, int number2);
float divide(float number1, float number2);
main()
{
int add2;
float divi;
add2=add(34,45);
cout<<"sum is..."<<add2<<endl;
divi=divide(55,5);
cout<<"division is..."<<divi<<endl;
}
int add(int number1, int number2)
{
int add;
add=number1+number2;
return add;
}
 float divide(float number1, float number2)
{
 float divide;
 divide=number1/number2;
 return divide;
}
