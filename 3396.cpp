//https://www.acwing.com/problem/content/3399/

// 算法原理：数位 DP
// 总体思想：计算 1 和 2 在各位中出现的次数，求和即可
// 为了更好地阐述原理，考虑更具一般性的问题：求 2 的个数
// 例如：N = 3124，求比 N 小的所有正数中'2'出现的个数
// 第一位'3'，大于2，'2'在该数位上共出现 （0+1）*1000  注：2000到2999都能包含到
// 第二位'1'，小于2，'2'在该数位上共出现 3*100
// 第三位'2'，等于2，'2'在该数位上共出现 31*10+（4+1）
// 第三位'4'，大于2，'2'在该数位上共出现 （312+1）*1
// 对同一个数 N = 3124，求比 N 小的所有正数中'1'出现的个数
// 同理，第一位（0+1）*1000，第二位 3*100+（24+1），第三位（31+1）*10，第四位（312+1）*1

// #include <iostream>
// using namespace std;
// const int mod = 20123;
// int main() {
//     for (string s; cin >> s;) {
//         int ans = 0, num = 0, cnts = 0;
//         // ans 为待输出的结果，num 保存前缀的数值，cnts 记录 1 或 2 的个数
//         for (char c : s) {// 从高位到低位
//             // num << 1 是 num * 2
//             c -= '0', ans = ans * 10 + c * cnts + (num << 1);
//             if (c >= 3)
//                 ans += 2;
//             else if (c == 2)
//                 ans++;
//             ans %= mod, cnts += c == 2 || c == 1, num = (num * 10 + c) % mod;
//         }
//         cout << (ans + cnts) % mod << "\n";
//     }
// }
#include <iostream>
#include <cstring>
using namespace std;
// typedef long long LL;// typedef后面有分号
const int mod = 20123;
int FN_K(string n, int k) {
    int ans = 0, cnt = 0, num = 0;
    for (char c : n) {
        c = c - '0';
        ans = ans * 10 + c * cnt + num;
        if (c > k) ans++;
        if (c == k) cnt++;
        num = num * 10 + c;
        //使劲模就行了，防止溢出
        ans %= mod;
        cnt %= mod;
        num %= mod;
    }
    ans += cnt;
    ans %= mod;
    return ans;
}
int main() {
    string n;
    while (cin >> n) {
        cout << (FN_K(n, 1) + FN_K(n, 2)) % mod << endl;
    }
}