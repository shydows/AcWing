// https://www.acwing.com/problem/content/3379/
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