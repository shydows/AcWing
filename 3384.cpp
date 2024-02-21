#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

// const int MAX_LEN = 100;//用string更高明
// char pre[MAX_LEN], in[MAX_LEN];//这里用逗号，不能分别char

// int main() {
//     scanf("%s", pre);
//     int top = 0;
//     for (int i = 0; i < pre.length(); i++) {//i < pre.len()错误，不能用len()函数
//         if (pre[i] == '#') {
//             cout << in[top--] << ' ';
//         } else {
//             in[++top] = pre[i];
//         }
//     }
//     cout << '\n';
//     return 0;
// }

int k;//会默认初始化为0
string str;

void dfs() {
    if (str[k] == '#') {
        k++;
        return;//不是return 0；
    }
    char r = str[k++];
    dfs();
    cout << r << ' ';
    dfs();
}

int main() {
    cin >> str;
    dfs();
    return 0;
}
//数组不能调用函数.length()，字符串可以