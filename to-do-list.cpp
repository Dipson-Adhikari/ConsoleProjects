#include <iostream>
#include <windows.h>
using namespace std;
void view_list(string list[], int count)
{
    cout << "Task To Be Completed:" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < count; i++)
    {

        cout << "Task " << i + 1 << " :" << list[i] << endl;
    }
    cout << "------------------------------" << endl;
}
int main()
{
    system("color 9");
    string list[5] = {""};
    int count = 0;
    int option = -1;
    while (option != 0)
    {
        cout << "~~~~~MENU~~~~~" << endl;
        cout << "1.Add New Task" << endl;
        cout << "2.View All Tasks" << endl;
        cout << "3.Delete a Task" << endl;
        cout << "0.Exit Menu" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            if (count >= 5)
            {
                system("cls");
                cout << "List Is full,delete A Task to Enter New Task." << endl;
            }
            else
            {
                system("cls");
                cout << "Enter a Task:";
                cin.ignore();
                getline(cin, list[count]);
                count++;
                system("cls");
            }
            break;
        }
        case 2:
        {
            system("cls");
            view_list(list, count);
            break;
        }
        case 3:
        {
            system("cls");
            view_list(list, count);
            int delete_task = 0;
            cout << "Enter the task number you want to delete:";
            cin >> delete_task;

            if (delete_task < 1 || delete_task > count)
            {
                cout << "Please Enter A Valid Task." << endl;
                break;
            }
            for (int i = delete_task; i < count; i++)
            {
                list[i] = list[i + 1];
            }
            count--;
            cout << "Task Deleted." << endl;
            view_list(list, count);
            break;
        }
        case 0:
        {
            cout << "Exiting the program." << endl;
            break;
        }
        default:
        {
            cout << "INVALID CHOICE!!!!" << endl;
            break;
        }
        }
    }
    return 0;
}
