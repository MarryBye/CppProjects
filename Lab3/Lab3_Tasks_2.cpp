#include <iostream>

using namespace std;

int main() {

    cout << "Написать программу, которая будет\n"
            "возводить число x в степень y, вводимые с\n"
            "клавиатуры,\n"
            "без использования стандартной функции pow()." << endl;

    int x, y, i;
    int ans = 1;

    cout << "Input x: ";
    cin >> x;
    cout << endl;

    cout << "Input y: ";
    cin >> y;
    cout << endl;

    if (x == 0 && y == 0) {
        cout << "The expression is meaningless" << endl;
    } else {
        for (i = 0; i < y; i++) {
            ans *= x;
        }

        cout << x << "^" << y << " = " << ans << endl;
    }

    system("pause");
    return 0;

}