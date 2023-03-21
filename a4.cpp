#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Point p1; cin >> p1.x >> p1.y;
    Point p2 ; cin >> p2.x >> p2.y;
    Point mid = mid_point(p1, p2);
    cout << "(" << mid.x << ", " << mid.y << ")" << endl;
    cout << "dia chi cua bien p1.x: " <<&p1.x << endl;
    cout << "dia chi cua bien p1.y: " << &p1.y << endl;
    cout << "dia chi cua bien p2.x: " << &p2.x << endl;
    cout << "dia chi cua bien p2.y: " << &p2.y << endl;
    return 0;
}
