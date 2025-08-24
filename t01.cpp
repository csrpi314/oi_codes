#include <bits/stdc++.h>

using namespace std;

struct Student {
    int sid;
    int score;
};

/**
 * 根据分数和学号比较两个学生对象。
 *
 * @param a 比较的第一个学生。
 * @param b 比较的第二个学生。
 *
 * @return true 如果学生a的分数比学生b高，或如果他们的分数相等且学生a的学号比学生b低，否则为假.
 *
 * @throws 无。
 */
bool cmp(Student a, Student b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else {
        return a.sid < b.sid;
    }
}

/**
 * 根据学生对象的学号和分数，按降序对数组进行排序。
 *
 * @param n 数组中学生对象的数量。
 *
 * @return 0 表示函数执行成功。
 *
 * @throws 无。
 */
int main() {
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].sid >> students[i].score;
    }

    sort(students, students + n, cmp);

    cout << endl;
    
    for (int i = 0; i < n; i++) {
        cout << students[i].sid << ' ' << students[i].score << endl;
    }
    return 0;
}
