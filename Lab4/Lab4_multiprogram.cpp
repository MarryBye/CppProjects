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

            int n;

            cout << "Enter n: ";
            cin >> n;
            cout << endl;

            cout << n << " / " << "11 = " << n / 11.0f << endl;
            (n % 11 == 0) ? cout << "Yes" : cout << "No";
            cout << endl;

            cout << n << " / " << "9 = " << n / 9.0f << endl;
            (n % 9 == 0) ? cout << "Yes" : cout << "No";
            cout << endl;

            break;
        case 4:
            cout << "Определить количество знаков в натуральном числе от 0 до 1000." << endl;

            int r, chars, divider;

            cout << "Enter r: ";
            cin >> r;
            cout << endl;

            while (r < 0 || r > 1000) {
                cout << "r must be: 0 < r < 1000 !!!" << endl;
                cout << "Enter r: ";
                cin >> r;
                cout << endl;
            }

//  Универсальный вариант ерез циклы, без циклов программа ниже, но без циклов как по мне она бесполезная и не имеет
//  смысла поскольку мы знаем что у нас число будет только от 0 до 1000 и использовать счетчик тут нет смысла.
//  Вариант с циклами ниже работает с любыми числами, не только от 0 до 1000.

            divider = 1; // изначально делитель это 1

            while (divider * 10 <= r) { // получаем нужный делитель, он должен быть меньше или равен нашему числу, но
                divider *= 10;          // при следующем умножении больше, перед ним цикл и оборвется
            }

            while (divider >= 1) {      // добавляем в кол-ву цифр +1, делим по модулю число чтобы отрезать первую цифру
                chars++;                // далее уменьшаем делитель в 10 раз
                r = r % divider;
                divider /= 10;
            }

//             if (r >= 0 && r < 10) {
//                 chars = 1;
//             } else if (r >= 10 && r < 100) {
//                 chars = 2;
//             } else if (r >= 100 && r < 1000) {
//                 chars = 3;
//             } else {
//                 chars = 4;
//             }

//            if (r % 1000 != r) {
//                divider = 1000;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//            } else if (r % 100 != r) {
//                divider = 100;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//            } else if (r % 10 != r) {
//                divider = 10;
//                chars++;
//                r = r % divider;
//                divider /= 10;
//                chars++;
//                r = r % divider;
//            } else {
//                divider = 1;
//                chars++;
//                r = r % divider;
//            }

            cout << "Number of chars: " << chars << endl;

            break;
        default:
            cout << "No option " << option << endl;
    }

    system("pause");
    return 0;

}