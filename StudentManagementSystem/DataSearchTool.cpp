#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int getin, tail;
int location[100000];
int number = 0;
char in[30];
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
} member[100000];
int main()
{
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("暂无数据。请按照格式录入数据再进行检索。"), TEXT("错误"), MB_ICONERROR | MB_OK);
        return 0;
    }
    for (int i = 1; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
    }
    freopen("CON ", "r", stdin);
    cout << "请输入要检索的关键词的序号。" << endl;
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
        cout << "请输入要检索的姓名" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "请输入要检索的性别" << endl;
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
            cout << "抱歉！我们没有在数据中找到该性别的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "请输入要检索的出生日期" << endl;
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
            cout << "抱歉！我们没有在数据中找到该天出生的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 4)
    {
        cout << "请输入要检索的入学年份" << endl;
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
            cout << "抱歉！我们没有在数据中找到该年入学的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 5)
    {
        cout << "请输入要检索的班级" << endl;
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
            cout << "抱歉！我们没有在数据中找到该班级的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 6)
    {
        cout << "请输入要检索的座位号" << endl;
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
            cout << "抱歉！我们没有在数据中找到该座位号的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "请输入要检索的校内ID" << endl;
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
            cout << "抱歉！我们没有在数据中找到拥有该校内ID的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "请输入要检索的学籍号" << endl;
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
            cout << "抱歉！我们没有在数据中找到拥有该学籍号的人。" << endl;
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
            system("pause");
            return 0;
        }
    }
    return 0;
}