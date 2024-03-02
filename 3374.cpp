#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int M, N;
    cin >> M >> N;
    string s;
    cin >> s;
    vector<int> num;

    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            num.push_back(c - '0');
        } else num.push_back(c - 'A' + 10);// ��һ������Ҫ��������
    }

    reverse(num.begin(), num.end());// ��Ҫ�����������λ��λ0

    vector<int> res;
    // ���Ĳ���
    while (num.size()) {
        int t = 0;
        for (int i = num.size() - 1; i >= 0; i--) {
            num[i] += t * M;
            t = num[i] % N;
            num[i] /= N;
        }
        res.push_back(t);// �൱��ȫ����λ����һ��nʣ�µģ�Ҳ���ǰ�ԭ��ģn������
        while (num.size() && num.back() == 0) num.pop_back();
        // ��num��ĩβ��ʼ�Ƴ�����ֵΪ���Ԫ�أ�ֱ��������һ������Ԫ�ػ���numΪ�ա�
    }
    // ע����begin()������begin
    reverse(res.begin(), res.end());// ��Ҫ�����������

    string ret;
    for (auto c : res) {
        if (c >= 0 && c <= 9) {
            ret += char(c + '0');
        } else ret += char(c + 'a' - 10);// ��һ������Ҫ��������
    }

    cout << ret << endl;
    return 0;
}