#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int sum, ct = 0, allsame = 0, start = 1, tt, ls;
char ins;
HWND hwnd = GetForegroundWindow();
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
    char record[50][50];
    int rsum;
} member[100000];
void input(int head, int tail)
{
    for (int i = head; i <= tail; i++)
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
}
bool control(student x, student y)
{
    return strcmp(x.scid, y.scid) < 0;
}
void inputcheck(int head, int tail)
{
    ls = 0;
    freopen("CON", "w", stdout);
    for (int i = head; i <= tail; i++)
    {
        ls += 1;
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
        cout << "No." << ls << endl
             << "姓名：" << member[i].name << endl
             << "性别：" << member[i].ge << endl
             << "出生日期：" << member[i].bir << endl
             << "入学年份：" << member[i].intoy << endl
             << "班号：" << member[i].cla << endl
             << "座位号：" << member[i].clid << endl
             << "校内ID：" << member[i].scid << endl
             << "学籍号：" << member[i].naid << endl
             << endl;
        member[i].rsum = 0;
        for (int j = 1; j <= head - 1; j++)
        {
            int count = 0;
            if (strcmp(member[i].name, member[j].name) == 0)
                count += 1;
            if (strcmp(member[i].cla, member[j].cla) == 0 && strcmp(member[i].clid, member[j].clid) == 0)
                count += 1;
            if (strcmp(member[i].scid, member[j].scid) == 0)
                count += 1;
            if (strcmp(member[i].naid, member[j].naid) == 0)
                count += 1;
            if (count >= 2 && count < 4)
            {
                member[i].rsum = member[j].rsum;
                for (int k = 1; k <= member[j].rsum; k++)
                    strcpy(member[i].record[k], member[j].record[k]);
                member[j] = member[i];
                tail -= 1;
                i -= 1;
                ct += 1;
                break;
            }
            else if (count == 4)
            {
                if (strcmp(member[i].ge, member[j].ge) == 0 && strcmp(member[i].bir, member[j].bir) == 0 && strcmp(member[i].intoy, member[j].intoy) == 0)
                {
                    member[i].rsum = member[j].rsum;
                    for (int k = 1; k <= member[j].rsum; k++)
                        strcpy(member[i].record[k], member[j].record[k]);
                    member[j] = member[i];
                    tail -= 1;
                    i -= 1;
                    allsame += 1;
                    break;
                }
                else
                {
                    member[i].rsum = member[j].rsum;
                    for (int k = 1; k <= member[j].rsum; k++)
                        strcpy(member[i].record[k], member[j].record[k]);
                    member[j] = member[i];
                    tail -= 1;
                    i -= 1;
                    ct += 1;
                    break;
                }
            }
        }
    }
}
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    for (int i = 0; i <= 100000; i++)
        member[i].rsum = 0;
    freopen("Cache//Record.txt", "r", stdin);
    scanf(" %d", &tt);
    for (int i = 1; i <= tt; i++)
    {
        scanf(" %d", &member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cin >> member[i].record[j];
    }
    freopen("Cache//Cache.txt", "r", stdin);
    scanf(" %d", &sum);
    input(1, sum);
    start = sum + 1;
    while (1)
    {
        freopen("Data//AddInPut.txt", "r", stdin);
        scanf(" %d", &sum);
        if (sum)
            break;
        MessageBox(NULL, TEXT("请按照格式在StudentManagementSystem/Data/AddInPut.txt内填充数据后单击确定。"), TEXT("错误"), MB_ICONERROR | MB_OK);
    }
    int taile = sum + start - 1;
    inputcheck(start, taile);
    taile = taile - ct - allsame;
    sort(member + 1, member + 1 + taile, control);
    freopen("Cache//Cache.txt", "w", stdout);
    printf("%d\n", taile);
    for (int i = 1; i <= taile; i++)
        cout << member[i].name << endl
             << member[i].ge << endl
             << member[i].bir << endl
             << member[i].intoy << endl
             << member[i].cla << endl
             << member[i].clid << endl
             << member[i].scid << endl
             << member[i].naid << endl;
    freopen("Cache//Record.txt", "w", stdout);
    tt = taile;
    printf("%d\n", tt);
    for (int i = 1; i <= tt; i++)
    {
        printf("%d\n", member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cout << member[i].record[j] << endl;
    }
    freopen("CON", "w", stdout);
    cout << "数据录入完成。" << endl;
    if (allsame || ct)
        cout << "与已录入数据有";
    if (ct)
        cout << ct << "处冲突";
    if (allsame && ct)
        cout << ",";
    if (allsame)
        cout << allsame << "处完全相同";
    if (allsame || ct)
        cout << "。已使用新数据覆盖，但原数据在校记录仍保留。" << endl
             << "如有异议请及时查看。" << endl;
    freopen("CON", "r", stdin);
    system("pause");
    return 0;
}