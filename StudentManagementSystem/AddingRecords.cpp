#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int tail, getin, number = 0, location[100000], tt;
char in[30];
HWND hwnd = GetForegroundWindow();
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
    char record[50][50];
    int rsum;
} member[100000];
bool control(student x, student y)
{
    return strcmp(x.scid, y.scid) < 0;
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
        MessageBox(NULL, TEXT("暂无数据。请按照格式录入数据再尝试添加在校记录。"), TEXT("错误"), MB_ICONERROR | MB_OK);
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
    freopen("CON", "r", stdin);
    cout << "请输入要添加校内记录的学生的关键词序号。" << endl;
    cout << "1.姓名" << endl
         << "2.性别" << endl
         << "3.出生日期" << endl
         << "4.入学年份" << endl
         << "5.班号" << endl
         << "6.座位号" << endl
         << "7.校内ID" << endl
         << "8.学籍号" << endl;
    scanf(" %d", &getin);
    if (getin == 1)
    {
        cout << "请输入要添加校内记录的学生姓名" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个该姓名的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    if (getin == 2)
    {
        cout << "请输入要添加校内记录的学生的性别" << endl;
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
            cout << "抱歉！我们没有在数据中找到这个性别的人。" << endl;
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个这个性别的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    if (getin == 3)
    {
        cout << "请输入要添加校内记录的学生的出生日期" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个该天出生的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    if (getin == 4)
    {
        cout << "请输入要添加校内记录的学生的入学年份" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个该年入学的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    if (getin == 5)
    {
        cout << "请输入要添加校内记录的学生的班级" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个该班级的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    if (getin == 6)
    {
        cout << "请输入要添加校内记录的学生的座位号" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个该座位号的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "请输入要添加校内记录的学生的校内ID" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个拥有该校内ID的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "请输入要添加校内记录的学生的学籍号" << endl;
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
            freopen("CON", "w", stdout);
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
            cout << "请输入要添加的记录" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "为您找到" << number << "个拥有该学籍号的学生" << endl
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
            cout << "请输入要添加记录的学生的序号" << endl;
            scanf(" %d", &getin);
            cout << "请输入要添加的记录" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "添加完成！" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    freopen("Cache//Record.txt", "w", stdout);
    printf("%d\n", tt);
    for (int i = 1; i <= tt; i++)
    {
        printf("%d\n", member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cout << member[i].record[j] << endl;
    }
    return 0;
}