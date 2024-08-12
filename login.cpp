#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    system("cls");
    string registerid, registerpass;
    cout << "\t\t\tCreate a Username: ";
    cin >> registerid;
    cout << "\t\t\tCreate a Password: ";
    cin >> registerpass;

    ofstream regi("DATA.txt", ios::app);
        regi << registerid << " " << registerpass << endl;
        regi.close();
        system("cls");
        cout << "\n\t\t\tSuccessfully Registered." << endl;
    
}

void login() {
    system("cls");
    string loginid, loginpass, id, pass;
    bool found = false;
    cout << "\t\t\tEnter Username: ";
    cin >> loginid;
    cout << "\t\t\tEnter Password: ";
    cin >> loginpass;

    ifstream input("DATA.txt");
        while (input >> id >> pass) {
            if (id == loginid && pass == loginpass) {
                found = true;
                break;
            }
        }
        input.close();
        system("cls");
        if (found) {
            cout << "\n\t\t\tLogin Successful!" << endl;
        } 
		else {
            cout << "\n\t\t\tInvalid Username or Password!" << endl;
        }
    }


void forgotPassword() {
    system("cls");
    string searchid, id, pass;
    bool found = false;
    cout << "\t\t\tEnter Username : ";
    cin >> searchid;

    ifstream input("DATA.txt");
        while (input >> id >> pass) {
            if (id == searchid) {
                found = true;
                cout << "\n\t\t\tYour Password is: " << pass << endl;
                break;
            }
        }
        input.close();

        if (!found) {
            cout << "\n\t\t\tUsername not found!" << endl;
        }
    
}

int main() {
    int choice;
    while (true) {
        cout << "\t\t\t__________ MENU__________\n\n\n";
        cout << "\t\t\t1. REGISTER" << endl;
        cout << "\t\t\t2. LOGIN" << endl;
        cout << "\t\t\t3. FORGOT PASSWORD" << endl;
        cout << "\t\t\t4. EXIT MENU" << endl;
        cout << "\n\t\t\tPress Number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                login();
                break;
            case 3:
                forgotPassword();
                break;
            case 4:
                cout << "\t\t\tExiting Program!! Thank You" << endl;
                return 0;
            default:
                cout << "\n\t\t\tWrong Choice" << endl;
        }
    }
    return 0;
}

