#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int sum, state=1, start = 1;
char ins;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
//WinExec("1.exe",SW_HIDE);
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
int main()
{
    freopen("Cache//State.txt", "r", stdin);
    scanf(" %d", &state);
    if (state == 1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &sum);
        input(1, sum);
        start = sum + 1;
    }
    else
    {
        freopen("Cache//State.txt", "w", stdout);
        printf("1\n");
    }
    freopen("Data//InPut.txt", "r", stdin);
    scanf(" %d", &sum);
    int taile = sum + start - 1;
    input(start, taile);
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
    return 0;
}