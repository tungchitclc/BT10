#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")";
}


int main() {
    Point p1; cin >> p1.x >> p1.y;

    cout << "p1: ";
    print(p1);
    return 0;
}

