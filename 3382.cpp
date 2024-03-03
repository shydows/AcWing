//闫氏DP法：https://www.cnblogs.com/IzayoiMiku/p/13635809.html
//01背包问题：https://www.acwing.com/solution/content/1374/
// 如果使用顺序，会先更新f[4],再更新f[7]
// 对于这个书包问题来讲，就是有可能
// 在更新f[4]的时候，已经把这次能加的物品加进来了
// 然后更新f[7]的时候，还有可能再加一次
// 所以必须使用逆序，保证f[4]是没有加入新物品前，背包里的最优解。
//完全背包问题：https://www.acwing.com/problem/content/3/

//https://www.acwing.com/problem/content/3385/
#include <iostream>

using namespace std;

const int N = 1000010;
const int MOD = 1e9;

int a[N];
int n, f[N];

int main() {
    cin >> n;

    f[0] = 1;
    for (int i = 1;i <= n;i *= 2) {
        for (int j = i;j <= n;j++) {
            f[j] = (f[j] + f[j - i]) % MOD;// f[j]默认为0
        }
    }

    cout << f[n] << endl;

    return 0;
}