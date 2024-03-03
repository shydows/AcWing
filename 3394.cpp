//https://www.acwing.com/problem/content/3397/
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f, N = 1010;

int L1, L2, L3, C1, C2, C3, A, B, n, a[N];
int f[N];// 表示从起始站A到达站i所需要的最小花费
//不能写f[n]，要保证先定义了n

int main() {
    cin >> L1 >> L2 >> L3 >> C1 >> C2 >> C3 >> A >> B >> n;
    for (int i = 2; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    f[A] = 0;// 可以不写，默认初始化为0
    for (int i = A + 1; i <= B; i++) {
        f[i] = INF;
        // 到达任意一个站点都可以是由前面任意一个站经过三种票中的某一种转移过来
        for (int j = A; j < i; j++) {
            int d = a[i] - a[j];
            //默认越短的票越便宜，每公里单价越贵
            //默认相邻站台之间的距离不会大于最长距离票程
            if (d <= L1) f[i] = min(f[i], f[j] + C1);
            if (d > L1 && d <= L2) f[i] = min(f[i], f[j] + C2);
            if (d > L2 && d <= L3) f[i] = min(f[i], f[j] + C3);
        }
    }
    cout << f[B] << endl;
    return 0;
}