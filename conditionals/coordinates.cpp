#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else if (x > 0 && y > 0) {
        cout << "The point lies in the 1st Quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point lies in the 2nd Quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point lies in the 3rd Quadrant." << endl;
    } else {
        cout << "The point lies in the 4th Quadrant." << endl;
    }
}
