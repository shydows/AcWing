#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

// const int MAX_LEN = 100;//��string������
// char pre[MAX_LEN], in[MAX_LEN];//�����ö��ţ����ֱܷ�char

// int main() {
//     scanf("%s", pre);
//     int top = 0;
//     for (int i = 0; i < pre.length(); i++) {//i < pre.len()���󣬲�����len()����
//         if (pre[i] == '#') {
//             cout << in[top--] << ' ';
//         } else {
//             in[++top] = pre[i];
//         }
//     }
//     cout << '\n';
//     return 0;
// }

int k;//��Ĭ�ϳ�ʼ��Ϊ0
string str;

void dfs() {
    if (str[k] == '#') {
        k++;
        return;//����return 0��
    }
    char r = str[k++];
    dfs();
    cout << r << ' ';
    dfs();
}

int main() {
    cin >> str;
    dfs();
    return 0;
}
//���鲻�ܵ��ú���.length()���ַ�������