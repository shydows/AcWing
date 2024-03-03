//https://www.acwing.com/problem/content/3396/

// 惯性思维
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long LL;
// int main() {
//     //如果全是负数,返回最大的那个数字
//     int zheng_cnt = 0;
//     //max表示最大个位数，sum表示当前和，max_sum表示和的最大值
//     LL N, t, sum = 0, max = -0x3F3F3F3F, max_sum = 0;
//     cin >> N;
//     while (N) {
//         cin >> t;
//         if (t > 0) zheng_cnt++;
//         if (t > max) max = t;
//         sum += t;
//         if (sum > max_sum) max_sum = sum;
//         if (sum < 0) sum = 0;
//         N--;
//     }
//     if (zheng_cnt == 0) max_sum = max;
//     cout << max_sum << endl;
//     return 0;
// }

//dp思想
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL N = 1.1e6;
const LL Min = -0x3f3f3f3f;//负∞
LL n, ans = Min;
LL dp[N], a[N];
signed main() {
    cin >> n;
    for (LL i = 1;i <= n;i++)cin >> a[i], dp[i] = a[i];
    for (LL i = 2;i <= n;i++)dp[i] = max(dp[i], dp[i - 1] + a[i]);//动态转移方程式
    for (LL i = 1;i <= n;i++)ans = max(ans, dp[i]);
    cout << ans;
}