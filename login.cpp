#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
void register();
void login();
void forgotPassword();
int main()
{
    int choice;
    cout<<"\t\t\t__________ MENU__________\n\n\n";
    cout<<"1.REGISTER"<<endl;
    cout<<"2.LOGIN"<<endl;
    cout<<"3.FORGOT PASSWORD"<<endl;
    cout<<"4.EXIT MENU"<<endl;
    cout<<"\n\t\t\tPress Number:";
    cin>>choice;

    switch(choice)
    {
        case 1:
            register();
            break;
        case 2:
            login();
            break;
        case 3:
            forgotPassword();
            break;
        case 4:
            cout<<"\t\t\tExiting Program!!Thank You";
        default:
            cout<<"\n\t\t\tWrong Choice"<<endl;
            main();

    }
}