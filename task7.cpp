#include<iostream>
using namespace std;
float pipe1(int value);
float pipe2(int value1);

 main()
 {
 	float per1;
 	float per2;
 	float flo1;
 	float flo2;
        float totalper;
        int value;
        int value1;
        int sum;
        int overflow;
        int totalpool;
        int filledtime,
 	flo1=pipe1(value);
        flo2=pipe2(value1);
        sum=flo1+flo2;
 	per1=(flo1/10000)*100;
  	per2=(flo2/10000)*100;
 	totalpool=per1+per2;
        overflow=totalpool-100;
        if(totalpool<10000)
        {
		cout<<"total pool is filled"<<totalpool<<endl;
		cout<<"pipe 1 is filled the pool "<<per1<<endl;
		cout<<"pipe 2 is filled the pool "<<per2<<endl;
        }
        if(totalpool>10000)
        {
		cout<<"pool is overflowed"<<overflow<<endl;
        }            		             
       filledtime=10000-totalpool;
       cout<<"remaing volume"<<endl;
 }
 float pipe1(int value)
 {
	 int flowrate;
 	 int hour;
 	 cout<<"enter flowrate of first pipe[1....5000]"<<endl;
 	 cin>>flowrate;
 	 cout<<"enter hour "<<endl;
 	 cin>>hour;
       	 value=flowrate*hour;
 	 return value;
 }
 float pipe2(int value1)
 {
 	float flowrate2;
 	float hour;
 	cout<<"enter flowrate of second pipe[1.....5000]"<<endl;
	 cin>>flowrate2;
 	cout<<"hour"<<endl;
 	cin>>hour;
 	value1=flowrate2*hour;
 	return value1;
 }
 
