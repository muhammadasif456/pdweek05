#include<iostream>
#include<cmath>
using namespace std;
float calpositive(int a,int b, int c);
float calnegative(int a, int b, int c);
main()

{
 int a=5;
 int b=6;
 int c=1;
 calpositive(a,b,c);
 calnegative(a,b,c);
}
 float calpositive(int a, int b, int c)
{
 float step1;
 float step2;
 float step3;
 float step4;
 float step5;
 float step6;
 float step8;
 float step9;
 step1=pow(6,2);
 step2=step1-4*(a)*(c);
 step3=sqrt(step2);
 step4=-b+step3;
 step5=2*a; 
 step6=step4/step5;
 cout<<"value of x is.."<<step6;
 return 0;
}
 float calnegative(int a, int b, int c)
 {
 float step1;
 float step2;
 float step3;
 float step4;
 float step5;
 float step6;
 step1=pow(6,2);
 step2=step1-4*(a)*(c);
 step3=sqrt(step2);
 step4=-b-step3;
 step5=2*a; 
 step6=step4/step5;
 cout<<"value of x is..."<<step6<<endl;
 return 0;
}
