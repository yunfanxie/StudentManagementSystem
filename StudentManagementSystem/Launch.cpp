#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int getin;
char in[10];
HWND hwnd = GetForegroundWindow();
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        cout << "欢迎来到学生管理系统。" << endl
             << "请输入要进行的操作的序号。 " << endl;
        cout << "1.检索学生信息" << endl
             << "2.删除学生信息" << endl
             << "3.修改学生信息" << endl
             << "4.增加学生信息" << endl
             << "5.检索在校记录" << endl
             << "6.删除在校记录" << endl
             << "7.修改在校记录" << endl
             << "8.增加在校记录" << endl;
        scanf(" %d", &getin);
        if (getin == 1)
        {
            system("start SearchingInfo.exe");
            system("cls");
        }
        else if (getin == 2)
        {
            system("start DeletingInfo.exe");
            system("cls");
        }
        else if (getin == 3)
        {
            system("start ModifyingInfo.exe");
            system("cls");
        }
        else if (getin == 4)
        {
            cout << "请按照格式在StudentManagementSystem/Data/AddInPut.txt内填充数据,然后输入“yes”。" << endl;
            while (1)
            {
                scanf(" %s", in);
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                    break;
            }
            system("start AddingInfo.exe");
            system("cls");
        }
        else if (getin == 5)
        {
            system("start SearchingRecords.exe");
            system("cls");
        }
        else if (getin == 6)
        {
            system("start DeletingRecords.exe");
            system("cls");
        }
        else if (getin == 7)
        {
            system("start ModifyingRecords.exe");
            system("cls");
        }
        else if (getin == 8)
        {
            system("start AddingRecords.exe");
            system("cls");
        }
    }
    return 0;
}