#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int option;

    cout << "Choose option of program: ";
    cin >> option;
    cout << endl;

    switch (option) {
        case 1:
            cout << "Программа для решения квадратного уравнения Ax 2 + Bx +\n"
                    "   C = 0. A , B и C вводятся с клавиатуры." << endl;

            float A, B, C, d, sqrd, x1, x2;

            cout << "Enter A: ";
            cin >> A;
            cout << endl;

            cout << "Enter B: ";
            cin >> B;
            cout << endl;

            cout << "Enter C: ";
            cin >> C;
            cout << endl;

            cout << A << "x^2 + " << B << "x + " << C << " = 0" << endl;

            d = (pow(B, 2)) - (4 * A * C);
            cout << "Discriminant: " << d << endl;

            sqrd = sqrt(d);

            if (d < 0) {
                cout << "No roots!" << endl;
            } else if (d == 0) {
                x1 = (-1 * B + sqrd) / (2 * A);
                cout << "x: " << x1 << endl;
            } else {
                x1 = (-1 * B + sqrd) / (2 * A);
                x2 = (-1 * B - sqrd) / (2 * A);

                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl;
            }

            break;
        case 2:
            cout << "Решить уравнение a|x|=b." << endl;

            float a, b, x;

            cout << "Enter a: ";
            cin >> a;
            cout << endl;

            cout << "Enter b: ";
            cin >> b;
            cout << endl;

            x = b / a;

            if (x < 0) {
                cout << "No roots!" << endl;
            } else if (a == 0 && b != 0) {
                cout << "No roots!" << endl;
            } else if (a == 0 && b == 0) {
                cout << "x E R" << endl;
            } else {
                cout << a << "|x| = " << b << endl;
                cout << "|x| = " << b << " / " << a << endl;
                cout << "|x| = " << x << endl;
                cout << "x1 = " << x << " | x2 = " << x * -1 << endl;
            }

            break;
        case 3:
            cout << "Определить делится ли введенное с клавиатуры натуральное число\n"
                    "   нацело на 11, 9." << endl;

            break;
        case 4:
            cout << "Определить количество знаков в натуральном числе от 0 до 1000." << endl;

            break;
        default:
            cout << "No option " << option << endl;
    }

    system("pause");
    return 0;

}