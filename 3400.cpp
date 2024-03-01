// 算法原理：数位 DP
// 总体思想：计算 1 和 2 在各位中出现的次数，求和即可
// 为了更好地阐述原理，考虑更具一般性的问题：求 2 的个数
// 例如：N = 3124，求比 N 小的所有正数中'2'出现的个数
// 第一位'3'，大于2，'2'在该数位上共出现 （0+1）*1000  注：2000到2999都能包含到
// 第二位'1'，小于2，'2'在该数位上共出现 3*100
// 第三位'2'，等于2，'2'在该数位上共出现 31*10+（4+1）
// 第三位'4'，大于2，'2'在该数位上共出现 （312+1）*1
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string n;
    int k, ans = 0, cnt = 0, num = 0;
    cin >> n >> k;
    for (char c : n) {
        c = c - '0';
        ans = ans * 10 + c * cnt + num;
        if (c > k) ans++;
        if (c == k) cnt++;
        num = num * 10 + c;
    }
    ans += cnt;//这一步很重要，回归数学原理
    cout << ans << endl;
    return 0;
}