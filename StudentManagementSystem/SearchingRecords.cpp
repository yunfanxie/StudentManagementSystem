#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
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
HWND hwnd = GetForegroundWindow();
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("�������ݡ��밴�ո�ʽ¼�������ٽ��м�����"), TEXT("����"), MB_ICONERROR | MB_OK);
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
    cout << "������Ҫ������¼��ѧ������Ϣ�ؼ��ʵ���š�" << endl;
    cout << "1.����" << endl
         << "2.�Ա�" << endl
         << "3.��������" << endl
         << "4.��ѧ���" << endl
         << "5.���" << endl
         << "6.��λ��" << endl
         << "7.У��ID" << endl
         << "8.ѧ����" << endl;
    scanf(" %d", &getin);
    freopen("CON", "r", stdin);
    if (getin == 1)
    {
        cout << "������Ҫ������¼��ѧ��������" << endl;
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
            cout << "��Ǹ������û�����������ҵ�����ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "������Ҫ������¼��ѧ�����Ա�" << endl;
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
            cout << "��Ǹ������û�����������ҵ����Ա���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "������Ҫ������¼��ѧ���ĳ�������" << endl;
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
            cout << "��Ǹ������û�����������ҵ�����������ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "������" << member[location[1]].name << endl
                     << "�Ա�" << member[location[1]].ge << endl
                     << "�������ڣ�" << member[location[1]].bir << endl
                     << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                     << "��ţ�" << member[location[1]].cla << endl
                     << "��λ�ţ�" << member[location[1]].clid << endl
                     << "У��ID��" << member[location[1]].scid << endl
                     << "ѧ���ţ�" << member[location[1]].naid << endl
                     << endl;
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 4)
    {
        cout << "������Ҫ������¼��ѧ������ѧ���" << endl;
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
            cout << "��Ǹ������û�����������ҵ�������ѧ���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 5)
    {
        cout << "������Ҫ������¼��ѧ���İ༶" << endl;
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
            cout << "��Ǹ������û�����������ҵ��ð༶���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 6)
    {
        cout << "������Ҫ������¼��ѧ������λ��" << endl;
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
            cout << "��Ǹ������û�����������ҵ�����λ�ŵ��ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "������Ҫ������¼��ѧ����У��ID" << endl;
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
            cout << "��Ǹ������û�����������ҵ�ӵ�и�У��ID���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "������Ҫ������¼��ѧ����ѧ����" << endl;
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
            cout << "��Ǹ������û�����������ҵ�ӵ�и�ѧ���ŵ��ˡ�" << endl;
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << endl
                 << "������" << member[location[1]].name << endl
                 << "�Ա�" << member[location[1]].ge << endl
                 << "�������ڣ�" << member[location[1]].bir << endl
                 << "��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "��ţ�" << member[location[1]].cla << endl
                 << "��λ�ţ�" << member[location[1]].clid << endl
                 << "У��ID��" << member[location[1]].scid << endl
                 << "ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            for (int j = 1; j <= member[location[1]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[1]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ������¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            for (int j = 1; j <= member[location[getin]].rsum; j++)
            {
                cout << "No." << j << endl;
                cout << member[location[getin]].record[j] << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    return 0;
}