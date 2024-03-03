//https://www.acwing.com/problem/content/3392/

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>

// using namespace std;

// map<int, vector<int> > res;

// // 高精度乘法(模板)
// vector<int> mul(vector<int>& A, int b) {
//     // C 存储乘法结果
//     vector<int> C;

//     // t 用于保存中间结果
//     int t = 0;

//     // 遍历 A 中的每一位数字
//     for (int i = 0; i < A.size(); i++) {
//         // 将 A[i] 与 b 相乘，并加上之前的进位 t
//         t += A[i] * b;

//         // 将乘法结果的个位数添加到 C 中
//         C.push_back(t % 10);

//         // 更新进位
//         t /= 10;
//     }

//     // 处理最高位之后可能剩余的进位
//     while (t) {
//         C.push_back(t % 10);
//         t /= 10;
//     }

//     // 返回最终的乘法结果
//     return C;
// }


// int main() {
//     //预处理1~1000的阶乘
//     vector<int> t;
//     t.push_back(1);
//     res[1] = t;

//     for (int i = 2; i <= 1000; i++) res[i] = mul(res[i - 1], i);

//     int n;
//     while (cin >> n) {
//         vector<int> ans = res[n];

//         for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i];

//         cout << "\n";//puts("");
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, vector<int>> res;

vector<int> mul(vector<int>& A, int b) {
    vector<int> ret;
    int t = 0;
    for (int i = 0; i < A.size(); i++) {
        t += b * A[i];
        ret.push_back(t % 10);//ret[i] = t%10;
        t /= 10;
    }
    //防止最高位进位
    while (t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    return ret;
}

int main() {
    vector<int> t;
    //vector没有先声明数组大小，就要用push_back以免越界
    t.push_back(1);
    res[1] = t;

    for (int i = 2; i <= 1000; i++) {
        res[i] = mul(res[i - 1], i);
    }

    int n;
    while (cin >> n) {
        vector<int> ans = res[n];
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}