#include <iostream>
#include <cmath>

using namespace std;

bool isPointInTriangle(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    double areaABC = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
    double areaABM = abs(x1 * (y2 - y) + x2 * (y - y1) + x * (y1 - y2)) / 2.0;
    double areaBCM = abs(x2 * (y3 - y) + x3 * (y - y2) + x * (y2 - y3)) / 2.0;
    double areaCAM = abs(x3 * (y1 - y) + x1 * (y - y3) + x * (y3 - y1)) / 2.0;

    return areaABC == areaABM + areaBCM + areaCAM;
}

int main() {
    double x1, y1, x2, y2, x3, y3, x, y;
    cout << "Enter the coordinates of point A (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point B (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of point C (x3 y3): ";
    cin >> x3 >> y3;
    cout << "Enter the coordinates of point M (x y): ";
    cin >> x >> y;

    if (isPointInTriangle(x1, y1, x2, y2, x3, y3, x, y)) {
        cout << "Point M is inside the triangle ABC." << endl;
    }
    else {
        cout << "Point M is outside the triangle ABC." << endl;
    }

    return 0;
}
