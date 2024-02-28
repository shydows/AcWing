// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// typedef long long LL;

// vector<int> DISASSY(LL i) {
//     vector<int> ret;
//     while (i) {
//         ret.push_back(i % 10);
//         i /= 10;
//     }
//     return ret;
// }

// int main() {
//     LL a, b;
//     cin >> a >> b;
//     vector<int> A = DISASSY(a);
//     vector<int> B = DISASSY(b);

//     LL res = 0;

//     for (int i = 0; i < A.size(); i++) {
//         for (int j = 0; j < B.size(); j++) {
//             res += A[i] * B[j];
//         }
//     }
//     cout << res << endl;
//     return 0;
// }



//string
//(1+2+3)x(4+5) = 1��4+1��5+2��4+2��5+3��4+3��5
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int A = 0, B = 0;
    for (int i = 0; i < a.size(); i++) A += (a[i] - '0');
    for (int i = 0; i < b.size(); i++) B += (b[i] - '0');
    int ret = A * B;
    cout << ret << endl;

    return 0;
}