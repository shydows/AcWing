//https://www.acwing.com/problem/content/3382/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;

    while (cin >> input) {//����ֱ��cin<<input��Ϊ�Ƿ�����Ϊ�յ��ж�����
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