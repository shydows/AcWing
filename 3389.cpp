//https://www.acwing.com/problem/content/3392/

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>

// using namespace std;

// map<int, vector<int> > res;

// // �߾��ȳ˷�(ģ��)
// vector<int> mul(vector<int>& A, int b) {
//     // C �洢�˷����
//     vector<int> C;

//     // t ���ڱ����м���
//     int t = 0;

//     // ���� A �е�ÿһλ����
//     for (int i = 0; i < A.size(); i++) {
//         // �� A[i] �� b ��ˣ�������֮ǰ�Ľ�λ t
//         t += A[i] * b;

//         // ���˷�����ĸ�λ����ӵ� C ��
//         C.push_back(t % 10);

//         // ���½�λ
//         t /= 10;
//     }

//     // �������λ֮�����ʣ��Ľ�λ
//     while (t) {
//         C.push_back(t % 10);
//         t /= 10;
//     }

//     // �������յĳ˷����
//     return C;
// }


// int main() {
//     //Ԥ����1~1000�Ľ׳�
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
    //��ֹ���λ��λ
    while (t) {
        ret.push_back(t % 10);
        t /= 10;
    }
    return ret;
}

int main() {
    vector<int> t;
    //vectorû�������������С����Ҫ��push_back����Խ��
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