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

            int a, b, c, d;
            float sqrd, x1, x2;

            cout << "Enter A: ";
            cin >> a;
            cout << endl;

            cout << "Enter B: ";
            cin >> b;
            cout << endl;

            cout << "Enter C: ";
            cin >> c;
            cout << endl;

            cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

            d = (pow(b, 2)) - (4 * a * c);
            cout << "Discriminant: " << d << endl;

            sqrd = sqrt(d);

            if (d < 0) {
                cout << "No roots!" << endl;
            } else if (d == 0) {
                x1 = (-1 * b + sqrd) / (2 * a);
                cout << "x: " << x1 << endl;
            } else {
                x1 = (-1 * b + sqrd) / (2 * a);
                x2 = (-1 * b - sqrd) / (2 * a);

                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl;
            }

            break;
        case 2:
            cout << "Решить уравнение a|x|=b." << endl;

            int a, b;
            float x;

            cout << "Enter a: ";
            cin >> a;
            cout << endl;

            cout << "Enter b: ";
            cin >> b;
            cout << endl;



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