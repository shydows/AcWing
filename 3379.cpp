// 3379. �������

// �������� 4 ���ַ�(�磺abcd)�� �����������(�磺dcba)��

// �����ʽ
// �����������������ݡ�

// ÿ������ռһ�У������ĸ��ַ�����Сд��ĸ����

// �����ʽ
// ����ÿ�����룬���һ�з������ַ�����

// ���ݷ�Χ
// ���������� 100
//  �����ݡ�

// ����������
// Upin
// cvYj
// WJpw
// cXOA

// ���������
// nipU
// jYvc
// wpJW
// AOXc

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