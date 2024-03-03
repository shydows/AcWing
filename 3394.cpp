//https://www.acwing.com/problem/content/3397/
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f, N = 1010;

int L1, L2, L3, C1, C2, C3, A, B, n, a[N];
int f[N];// ��ʾ����ʼվA����վi����Ҫ����С����
//����дf[n]��Ҫ��֤�ȶ�����n

int main() {
    cin >> L1 >> L2 >> L3 >> C1 >> C2 >> C3 >> A >> B >> n;
    for (int i = 2; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    f[A] = 0;// ���Բ�д��Ĭ�ϳ�ʼ��Ϊ0
    for (int i = A + 1; i <= B; i++) {
        f[i] = INF;
        // ��������һ��վ�㶼��������ǰ������һ��վ��������Ʊ�е�ĳһ��ת�ƹ���
        for (int j = A; j < i; j++) {
            int d = a[i] - a[j];
            //Ĭ��Խ�̵�ƱԽ���ˣ�ÿ���ﵥ��Խ��
            //Ĭ������վ̨֮��ľ��벻����������Ʊ��
            if (d <= L1) f[i] = min(f[i], f[j] + C1);
            if (d > L1 && d <= L2) f[i] = min(f[i], f[j] + C2);
            if (d > L2 && d <= L3) f[i] = min(f[i], f[j] + C3);
        }
    }
    cout << f[B] << endl;
    return 0;
}