#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

//  truyền tham trị
void movePointByValue(Point p, int deltaX, int deltaY) {
    cout << "Dia chi cua bien kieu Point trong ham movePointByValue: " << &p <<endl;
    p.x += deltaX;
    p.y += deltaY;
}

//  truyền tham biến
void movePointByReference(Point& p, int deltaX, int deltaY) {
    cout << "Dia chi cua bien kieu Point trong ham movePointByReference: " << &p <<endl;
    p.x += deltaX;
    p.y += deltaY;
}

int main() {
    Point p = {1, 2};

    cout << "Dia chi cua bien kieu Point truoc khi truyen vao ham movePointByValue: " << &p <<endl;
    movePointByValue(p, 3, 4);
    cout << "Gia tri cua bien kieu Point sau khi goi ham movePointByValue: (" << p.x << ", " << p.y << ")" <<endl;

    cout << "Dia chi cua bien kieu Point truoc khi truyen vao ham movePointByReference: " << &p << endl;
    movePointByReference(p, 5, 6);
    cout << "Gia tri cua bien kieu Point sau khi goi ham movePointByReference: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}
