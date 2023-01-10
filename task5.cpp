#include <iostream>
using namespace std;
int time(int hour, int minute);

int main() {
    int hour;
    int minute;
    int measure;
     cout << "Enter the hour and minute"<<endl;
    cin >> hour;
    cout<<"minute";
    cin>> minute;
     minute += 15;
    measure=time(hour,minute);
   cout << "The time after 15 minutes is: " << hour << ":" << minute <<endl;
    
}
    int time(int hour, int minute)
   {
     if(minute>= 59) 
        {
         hour += 1;
        minute -= 60;
       }

      if(hour >= 23) {
       hour -= 24;
        }
    return hour,minute;
 }