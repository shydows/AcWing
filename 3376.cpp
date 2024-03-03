// https://www.acwing.com/problem/content/3379/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 定义学生结构体
struct Student {
    int id;
    int score;
};//别忘了这个分号

// 比较函数，用于 std::sort 排序
bool cmp(Student a, Student b) {
    if (a.score == b.score) {
        return a.id < b.id; // 如果成绩相同，按照学号从小到大排序
    } else {
        return a.score < b.score; // 按成绩从小到大排序
    }
}

int main() {
    int N;
    cin >> N;

    // 创建学生数组
    vector<Student> students(N); //注意这里是小括号

    // 输入学生信息
    for (int i = 0; i < N; ++i) {
        cin >> students[i].id >> students[i].score;
    }

    // 使用 std::sort 对学生数组进行排序，使用 cmp 函数作为比较规则
    sort(students.begin(), students.end(), cmp);

    // 输出重新排序后的成绩单
    for (Student student : students) {
        cout << student.id << " " << student.score << endl;
    }

    return 0;
}