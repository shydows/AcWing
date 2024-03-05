#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
struct Stu {
    int score, id;
    string name;
}stu[N];
bool cmp1(Stu a, Stu b) {
    if (a.score == b.score) return a.id < b.id;
    return a.score < b.score;
}
bool cmp2(Stu a, Stu b) {
    if (a.score == b.score) return a.id < b.id;
    return a.score > b.score;
}
int main() {
    int n, flag;// flag 为 1 表示从低到高
    scanf("%d%d", &n, &flag);
    string name; int score;
    for (int i = 0;i < n;i++) {
        cin >> name >> score;
        stu[i].id = i;
        stu[i].name = name;
        stu[i].score = score;
    }
    if (flag) sort(stu, stu + n, cmp1);
    else sort(stu, stu + n, cmp2);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " " << stu[i].score << "\n";
    }
}