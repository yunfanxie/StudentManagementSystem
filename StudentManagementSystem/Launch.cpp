#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int getin;
char in[10];
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int main()
{
    while (1)
    {
        cout << "欢迎来到学生管理系统。" << endl
             << "请输入要进行的操作的序号。 " << endl;
        cout << "1.检索" << endl
             << "2.删除" << endl
             << "3.修改" << endl
             << "4.增加" << endl;
        scanf(" %d", &getin);
        if (getin == 1)
        {
            system("start DataSearchTool.exe");
            system("cls");
        }
        else if (getin == 4)
        {
            cout << "请按照格式在StudentManagementSystem/Data/InPut.txt内填充数据,然后输入“yes”。" << endl;
            while (1)
            {
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                    break;
            }
            system("start GetInfo.exe");
            system("cls");
        }
    }
    return 0;
}