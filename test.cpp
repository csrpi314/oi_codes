#include <bits/stdc++.h>

using namespace std;

struct Point {
    double x, y, z;
};

bool compareHeight(Point p1, Point p2) {
    return p1.z < p2.z;
}

double calculateDistance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double dz = p2.z - p1.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

double calculateTotalDistance(Point points[], int N) {
    double totalDistance = 0.0;
    for (int i = 1; i < N; i++) {
        double distance = calculateDistance(points[i-1], points[i]);
        totalDistance += distance;
    }
    return totalDistance;
}

int main() {
    int N;
    cin >> N;

    Point points[N];
    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y >> points[i].z;
    }

    sort(points, points + N, compareHeight);

    double totalDistance = calculateTotalDistance(points, N);

    cout << totalDistance << endl;

    return 0;
}
