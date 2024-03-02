#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int M, N;
    cin >> M >> N;
    string s;
    cin >> s;
    vector<int> num;

    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            num.push_back(c - '0');
        } else num.push_back(c - 'A' + 10);// 这一步很重要，别忘了
    }

    reverse(num.begin(), num.end());// 必要，后面好消数位高位0

    vector<int> res;
    // 核心部分
    while (num.size()) {
        int t = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            num[i] += t * M;
            t = num[i] % N;
            num[i] /= N;
        }
        res.push_back(t);// 相当于全部数位除了一下n剩下的，也就是把原数模n的余数
        while (num.size() && num.back() == 0) num.pop_back();
        // 从num的末尾开始移除所有值为零的元素，直到遇到第一个非零元素或者num为空。
    }
    // 注意是begin()而不是begin
    reverse(res.begin(), res.end());// 必要，方便输出；

    string ret;
    for (auto c : res) {
        if (c >= 0 && c <= 9) {
            ret += char(c + '0');
        } else ret += char(c + 'a' - 10);// 这一步很重要，别忘了
    }

    cout << ret << endl;
    return 0;
}