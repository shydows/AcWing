// 3379. 反序输出

// 输入任意 4 个字符(如：abcd)， 并按反序输出(如：dcba)。

// 输入格式
// 输入包含多组测试数据。

// 每组数据占一行，包含四个字符（大小写字母）。

// 输出格式
// 对于每组输入，输出一行反序后的字符串。

// 数据范围
// 输入最多包含 100
//  组数据。

// 输入样例：
// Upin
// cvYj
// WJpw
// cXOA

// 输出样例：
// nipU
// jYvc
// wpJW
// AOXc

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;

    while (cin >> input) {//可以直接cin<<input作为是否输入为空的判断条件
        reverse(input.begin(), input.end());
        cout << input << endl;
    }

    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {

//     string input;
//     while (cin >> input) {

//         for (int i = input.size() - 1; i >= 0; i--) {
//             cout << input[i];
//         }
//         cout << endl;
//     }

//     return 0;
// }