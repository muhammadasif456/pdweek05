#include<iostream>
#include<cmath>
using namespace std;
bool symterii(int number);
main()
{
  int number1;
  int number;
  number1=symterii(number);
  if(number1==true)
 {
 cout<<"number is symetric"<<endl;
 }
 if(number1==false)
 {
 cout<<"number is not symetric"<<endl;
 }
}
 bool symterii(int number)
 {
 int x;
 int y;
 int z;
 cout<<"enter first digit"<<endl;
 cin>>x;
 cout<<"enter second digit"<<endl;
 cin>>y;
 cout<<"enter third digit"<<endl;
 cin>>z;
 cout<<"three digit number is......."<<x<<y<<z<<endl;
 if(x==z)
 {
  return true;
 }
 if(x!=z)
 {
 return false;
 }
 return 0;
}