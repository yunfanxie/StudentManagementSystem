#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int sum, ct = 0, allsame = 0, state = 1, start = 1;
char ins;
struct stu
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
} member[100000];
void input(int head, int tail)
{
    for (int i = head; i <= tail; i++)
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
}
void inputcheck(int head, int tail)
{
    freopen("CON", "w", stdout);
    for (int i = head; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
        cout << "No." << i - head + 1 << endl
             << "姓名：" << member[i].name << endl
             << "性别：" << member[i].ge << endl
             << "出生日期：" << member[i].bir << endl
             << "入学年份：" << member[i].intoy << endl
             << "班号：" << member[i].cla << endl
             << "座位号：" << member[i].clid << endl
             << "校内ID：" << member[i].scid << endl
             << "学籍号：" << member[i].naid << endl
             << endl;
        for (int j = 1; j < i; j++)
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
                member[j] = member[i];
                tail -= 1;
                i -= 1;
                ct += 1;
                break;
            }
            else if (count == 4 && strcmp(member[i].ge, member[j].ge) == 0 && strcmp(member[i].bir, member[j].bir) == 0 && strcmp(member[i].intoy, member[j].intoy) == 0)
            {
                member[j] = member[i];
                tail -= 1;
                i -= 1;
                allsame += 1;
                break;
            }
        }
    }
}
int main()
{
    freopen("Cache//State.txt", "r", stdin);
    scanf(" %d", &state);
    freopen("Cache//Cache.txt", "r", stdin);
    scanf(" %d", &sum);
    input(1, sum);
    start = sum + 1;
    freopen("Cache//State.txt", "w", stdout);
    printf("1\n");
    freopen("Data//InPut.txt", "r", stdin);
    scanf(" %d", &sum);
    int taile = sum + start - 1;
    inputcheck(start, taile);
    freopen("Cache//Cache.txt", "w", stdout);
    taile = taile - ct - allsame;
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
    freopen("CON", "w", stdout);
    cout << "数据录入完成。" << endl;
    if (ct)
        cout << "与原有数据有" << ct << "处冲突,已用新数据覆盖。" << endl;
    if (allsame)
        cout << "有" << allsame << "处完全相同" << endl;
    if (allsame || ct)
        cout << "如有异议请及时查看。" << endl;
    cout << "本次数据录入窗口将在7秒内关闭。" << endl;
    Sleep(7000);
    return 0;
}