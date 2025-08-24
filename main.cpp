/**
 * @file main.cpp
 * @author 赵思寒
 * @brief a c++ program which is to realize the problem:
    问题描述
    世博会志愿者的选拔工作正在A市如火如茶的进行。为了选拔最合适的人才，A市对所有报名的选手进行了笔试，笔试分数达到面试分数线的选手方可进入面试。面试分数线根据计划录取人数的150%划定，即如果计划录取m名志愿者，则面试分数线为排名第m×150%（向下取整)名的选手的分数，而最终进入面试的选手为笔试成绩不低于面试分数线的所有选手。
    现在就请你编写程序到定面试分数线，并输出所有进入面试的选手的报名号和笔试成绩。
    输入格式
    第一行，两个整数n,m(5≤n≤5000,3≤m≤n),中间用一个空格隔开，其中n表示报名参加笔试的选手总数，m表示计划录取的志愿者人数。输入数据保证m×150%向下取整后小于等于n。
    第二行到第+1行，每行包括两个整数，中间用一个空格隔开，分别是选手的报名号k(1000≤k≤9999)和该选手的笔试成绩s(1≤S≤100)。
    数据保证选手的报名号各不相同。
    输出格式
    第一行，有2个整数，用一个空格隔开，第一个整数表示面试分数线；第二个整数为进入面试的选手的实际人数。
    从第二行开始，每行包含2个整数，中间用一个空格隔开，分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输出，如果成绩相同，则按报名号由小到大的顺序输出。
 * @version 0.1
 * @date 2023-07-24
 * 
 */
#include <bits/stdc++.h>

using namespace std;

struct Student {
    int id;
    int score;
};

bool compare(Student a, Student b) {
    if(a.score != b.score) {
        return a.score > b.score;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Student students[5000];
    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].score;
    }
    sort(students, students+n, compare);
    m *= 1.5;
    int line = students[m-1].score;
    int count = m;
    for(int i = m; i < n; i++) {
        if(students[i].score == line) {
            count++;
        } else {
            break;
        }
    }
    cout << line << ' ' << count << endl;
    for(int i = 0; i < count; i++) {
        cout << students[i].id << ' ' << students[i].score << endl;
    }
    return 0;
}
