#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
HWND hwnd = GetForegroundWindow();
int getin, tail, tt;
int location[100000];
int number = 0;
char in[30];
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
    char record[50][50];
    int rsum;
} member[100000];
void Refresh()
{
    freopen("Cache//Cache.txt", "w", stdout);
    printf("%d\n", tail);
    for (int i = 1; i <= tail; i++)
        cout << member[i].name << endl
             << member[i].ge << endl
             << member[i].bir << endl
             << member[i].intoy << endl
             << member[i].cla << endl
             << member[i].clid << endl
             << member[i].scid << endl
             << member[i].naid << endl;
    freopen("Cache//Record.txt", "w", stdout);
    printf("%d\n", tt);
    for (int i = 1; i <= tt; i++)
    {
        printf("%d\n", member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cout << member[i].record[j] << endl;
    }
    freopen("CON", "w", stdout);
}
void DeleteInfo(int loca)
{
    for (int i = loca; i < tt; i++)
        member[i] = member[i + 1];
    tail -= 1;
    tt -= 1;
    Refresh();
}
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("暂无数据。请按照格式录入数据再进行删除。"), TEXT("错误"), MB_ICONERROR | MB_OK);
        return 0;
    }
    for (int i = 1; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
    }
    freopen("Cache//Record.txt", "r", stdin);
    scanf(" %d", &tt);
    for (int i = 1; i <= tt; i++)
    {
        scanf(" %d", &member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cin >> member[i].record[j];
    }
    freopen("CON ", "r", stdin);
    cout << "请输入要删除信息的学生的信息关键词的序号。" << endl;
    cout << "1.姓名" << endl
         << "2.性别" << endl
         << "3.出生日期" << endl
         << "4.入学年份" << endl
         << "5.班号" << endl
         << "6.座位号" << endl
         << "7.校内ID" << endl
         << "8.学籍号" << endl;
    scanf(" %d", &getin);
    freopen("CON", "r", stdin);
    if (getin == 1)
    {
        cout << "请输入要删除信息的学生的姓名" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].name, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到这个人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "请输入要删除信息的学生的性别" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].ge, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到该性别的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "请输入要删除信息的学生的出生日期" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].bir, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到该天出生的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 4)
    {
        cout << "请输入要删除信息的学生的入学年份" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].intoy, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到该年入学的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 5)
    {
        cout << "请输入要删除信息的学生的班级" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].cla, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到该班级的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 6)
    {
        cout << "请输入要删除信息的学生的座位号" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].clid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到该座位号的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "请输入要删除信息的学生的校内ID" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].scid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到拥有该校内ID的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "请输入要删除信息的学生的学籍号" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].naid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "抱歉！我们没有在数据中找到拥有该学籍号的人。" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "姓名：" << member[location[1]].name << endl
                 << "性别：" << member[location[1]].ge << endl
                 << "出生日期：" << member[location[1]].bir << endl
                 << "入学年份：" << member[location[1]].intoy << endl
                 << "班号：" << member[location[1]].cla << endl
                 << "座位号：" << member[location[1]].clid << endl
                 << "校内ID：" << member[location[1]].scid << endl
                 << "学籍号：" << member[location[1]].naid << endl
                 << endl;
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[1]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "条结果" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "姓名：" << member[location[j]].name << endl
                     << "性别：" << member[location[j]].ge << endl
                     << "出生日期：" << member[location[j]].bir << endl
                     << "入学年份：" << member[location[j]].intoy << endl
                     << "班号：" << member[location[j]].cla << endl
                     << "座位号：" << member[location[j]].clid << endl
                     << "校内ID：" << member[location[j]].scid << endl
                     << "学籍号：" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "请输入要删除信息的学生的序号" << endl;
            scanf(" %d", &getin);
            while (1)
            {
                cout << "确认删除请输入“yes”。" << endl;
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                {
                    DeleteInfo(location[getin]);
                    cout << "删除成功！" << endl;
                    break;
                }
                cout << "输入错误！";
            }
            system("pause");
            return 0;
        }
    }
    return 0;
}