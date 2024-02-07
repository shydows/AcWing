// 3376. 成绩排序2

// 给定学生的成绩单，成绩单中包含每个学生的学号和分数，请将成绩单按成绩从低到高的顺序重新排序。

// 如果学生的成绩相同，则按照学号从小到大的顺序进行排序。

// 输入格式

// 第一行包含整数 N，表示学生数量。

// 接下来 N 行，每行包含两个整数 p 和 q ，表示一个学生的学号和成绩。

// 学生的学号各不相同。

// 输出格式

// 输出重新排序后的成绩单。

// 每行输出一个学生的学号和成绩，用单个空格隔开。

// 数据范围
// 1≤N≤100
// 1≤p≤100
// 0≤q≤100

// 输入样例：
// 3
// 1 90
// 2 87
// 3 92
// 输出样例：
// 2 87
// 1 90
// 3 92

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