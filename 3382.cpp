//����DP����https://www.cnblogs.com/IzayoiMiku/p/13635809.html
//01�������⣺https://www.acwing.com/solution/content/1374/
// ���ʹ��˳�򣬻��ȸ���f[4],�ٸ���f[7]
// �������������������������п���
// �ڸ���f[4]��ʱ���Ѿ�������ܼӵ���Ʒ�ӽ�����
// Ȼ�����f[7]��ʱ�򣬻��п����ټ�һ��
// ���Ա���ʹ�����򣬱�֤f[4]��û�м�������Ʒǰ������������Ž⡣
//��ȫ�������⣺https://www.acwing.com/problem/content/3/

//https://www.acwing.com/problem/content/3385/
#include <iostream>

using namespace std;

const int N = 1000010;
const int MOD = 1e9;

int a[N];
int n, f[N];

int main() {
    cin >> n;

    f[0] = 1;
    for (int i = 1;i <= n;i *= 2) {
        for (int j = i;j <= n;j++) {
            f[j] = (f[j] + f[j - i]) % MOD;// f[j]Ĭ��Ϊ0
        }
    }

    cout << f[n] << endl;

    return 0;
}