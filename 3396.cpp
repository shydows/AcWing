// �㷨ԭ������λ DP
// ����˼�룺���� 1 �� 2 �ڸ�λ�г��ֵĴ�������ͼ���
// Ϊ�˸��õز���ԭ�������Ǹ���һ���Ե����⣺�� 2 �ĸ���
// ���磺N = 3124����� N С������������'2'���ֵĸ���
// ��һλ'3'������2��'2'�ڸ���λ�Ϲ����� ��0+1��*1000  ע��2000��2999���ܰ�����
// �ڶ�λ'1'��С��2��'2'�ڸ���λ�Ϲ����� 3*100
// ����λ'2'������2��'2'�ڸ���λ�Ϲ����� 31*10+��4+1��
// ����λ'4'������2��'2'�ڸ���λ�Ϲ����� ��312+1��*1
// ��ͬһ���� N = 3124����� N С������������'1'���ֵĸ���
// ͬ������һλ��0+1��*1000���ڶ�λ 3*100+��24+1��������λ��31+1��*10������λ��312+1��*1

// #include <iostream>
// using namespace std;
// const int mod = 20123;
// int main() {
//     for (string s; cin >> s;) {
//         int ans = 0, num = 0, cnts = 0;
//         // ans Ϊ������Ľ����num ����ǰ׺����ֵ��cnts ��¼ 1 �� 2 �ĸ���
//         for (char c : s) {// �Ӹ�λ����λ
//             // num << 1 �� num * 2
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
// typedef long long LL;// typedef�����зֺ�
const int mod = 20123;
int FN_K(string n, int k) {
    int ans = 0, cnt = 0, num = 0;
    for (char c : n) {
        c = c - '0';
        ans = ans * 10 + c * cnt + num;
        if (c > k) ans++;
        if (c == k) cnt++;
        num = num * 10 + c;
        //ʹ��ģ�����ˣ���ֹ���
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