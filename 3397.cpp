#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    //����n��mλ����
    vector<string> s;
    string t;
    s.push_back('a');//ռ�õ�һ����λ
    for (int i = 1; i <= n; i++) {
        cin >> t;
        s.push_back(t);
    }
    while (m) {
        m--;
        int NUM[10];//������¼����λ��0-9���ֵĸ���
        for (int i = 1; i <= n; i++) {
            int num = s[i][m] - '0';
            NUM[num]++;
        }
        int max = NUM[0];
        int res = 0;//��¼Ҫ���صĳ�����������
        for (int i = 0; i < 10; i++) {
            if (NUM[i] > max) {//����ȡ�ȣ�Ҫ�������������С
                max = NUM[i];
                res = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}