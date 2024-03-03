// C++�����ݺ��� pow ������ԭ�����£�
// #include <cmath>
// double pow(double base, double exponent);

// while(cin >> x >> y >> k)

// N = a_{0}k_{0} + a_{1}k_{1} + a_{3}k_{3} + �� + a_{n}k_{n};
// N�� = a_{0} + a_{1} + �� + a_{n};
// N - N�� = a_{0}(k_{0} - 1) + a_{1}(k_{1} - 1) + a_{3}(k_{3} - 1) + �� + a_{n}(k_{n} - 1);
// ����(k_{n} - 1) % (k - 1) === 0;
// ������ :
// (N - N��) % (k - 1) === 0;
// (N�� - N����) % (k - 1) === 0;
// (N���� - N������) % (k - 1) === 0;
// ��
// (N_{m-1} - N_{m}) % (k - 1) === 0;
// ��ͣ�
// (N - N_{m}) % (k-1) === 0
// ���� N_{m} = N % ( k - 1 ); ���մ𰸾�����N��k-1��ģ��
// �߽����⣬��� N == k - 1��ʱ��N % (k-1) === 0������resΪ0��ʱ����ȷ����k-1��

//https://www.acwing.com/problem/content/3391/
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

long long x, y, k;

// �����ᳬʱ��Ҫʹ�� �������ݡ� 
// int main() {
//     while (cin >> x >> y >> k) {
//         int N = 1;
//         while (y) {
//             y--;
//             N *= x;
//             N %= (k - 1);
//         }
//         if (N == 0) {
//             cout << (k - 1) << '\n';
//         } else {
//             cout << N << '\n';
//         }
//     }

//     return 0;
// }

typedef long long LL;
//������
LL qMI() {
    LL res = 1;
    while (y) {
        if (y & 1) {
            res = res * x % (k - 1);
        }
        x = x * x % (k - 1);
        y >>= 1;
    }
    if (res == 0) res = k - 1;
    return res;
}
int main() {
    while (cin >> x >> y >> k) {
        cout << qMI() << endl;
    }
    return 0;
}