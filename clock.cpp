#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int hour,minute,second=0;
    cout<<"  SET TIME"<<endl;
    cout<<"Enter Hour: ";
    cin>>hour;
    cout<<"Enter Minute: ";
    cin>>minute;
     cout<<"Enter Second: ";
    cin>>second;
    while(true)
    {
    system("cls");
    cout<<"    "<<"CLOCK"<<endl;
    cout<<"------------"<<endl;
    cout <<"  "<< (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    cout<<"------------"<<endl;
    second++;
    if(second==60)
    {
     minute++;
     second=0;   
    }
    if(minute==60)
    {
        hour++;
        minute=0;
    }
     if(hour==13 || minute==60)
    {
        hour=1;
       
    }
   
    Sleep(1000);
    }
    return 0;
}
