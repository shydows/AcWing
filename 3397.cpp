// https://www.acwing.com/problem/content/3400/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    //输入n个m位的数
    vector<string> s;
    string t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        s.push_back(t);
    }
    while (m) {
        m--;
        int NUM[10] = { 0 };//用来记录该数位上0-9出现的个数；初始化全为0
        for (int i = 0; i < n; i++) {
            int num = s[i][m] - '0';
            NUM[num]++;
        }
        int max = NUM[0];
        int res = 0;//记录要返回的出现最多的数字
        for (int i = 1; i < 10; i++) {
            if (NUM[i] > max) {//不能取等，要求符合条件的最小
                max = NUM[i];
                res = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}