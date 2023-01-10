#include<iostream>
using namespace std;
string capital(string capital1);
main()
{
 string capital1;
 string capital2;
 capital2=capital(capital1);
 if(capital2=="a")
 {
 cout<<"your have entered small"<<capital2;
 }
 if(capital2=="A")
 {
 cout<<"your have entered capital"<<capital2;
 }
 
}
string capital(string capital1)
 {
  cout<<"enter string"<<endl;
  cin>>capital1;
  return capital1;
}
   
 
 