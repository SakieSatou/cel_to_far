#include <iostream>

using namespace std;

int main() {
    float F, C;
    cout << "F = "; cin >> F;
    C = (F - 32) * 5 / 9;
    cout << "C = " << C << endl;
    cout << "C = "; cin >> C;
    F = C * 9 / 5 + 32;
    cout << "F = " << F << endl;
    return 0;
}