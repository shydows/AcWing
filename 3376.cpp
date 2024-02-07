// 3376. �ɼ�����2

// ����ѧ���ĳɼ������ɼ����а���ÿ��ѧ����ѧ�źͷ������뽫�ɼ������ɼ��ӵ͵��ߵ�˳����������

// ���ѧ���ĳɼ���ͬ������ѧ�Ŵ�С�����˳���������

// �����ʽ

// ��һ�а������� N����ʾѧ��������

// ������ N �У�ÿ�а����������� p �� q ����ʾһ��ѧ����ѧ�źͳɼ���

// ѧ����ѧ�Ÿ�����ͬ��

// �����ʽ

// ������������ĳɼ�����

// ÿ�����һ��ѧ����ѧ�źͳɼ����õ����ո������

// ���ݷ�Χ
// 1��N��100
// 1��p��100
// 0��q��100

// ����������
// 3
// 1 90
// 2 87
// 3 92
// ���������
// 2 87
// 1 90
// 3 92

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ����ѧ���ṹ��
struct Student {
    int id;
    int score;
};//����������ֺ�

// �ȽϺ��������� std::sort ����
bool cmp(Student a, Student b) {
    if (a.score == b.score) {
        return a.id < b.id; // ����ɼ���ͬ������ѧ�Ŵ�С��������
    } else {
        return a.score < b.score; // ���ɼ���С��������
    }
}

int main() {
    int N;
    cin >> N;

    // ����ѧ������
    vector<Student> students(N); //ע��������С����

    // ����ѧ����Ϣ
    for (int i = 0; i < N; ++i) {
        cin >> students[i].id >> students[i].score;
    }

    // ʹ�� std::sort ��ѧ�������������ʹ�� cmp ������Ϊ�ȽϹ���
    sort(students.begin(), students.end(), cmp);

    // ������������ĳɼ���
    for (Student student : students) {
        cout << student.id << " " << student.score << endl;
    }

    return 0;
}