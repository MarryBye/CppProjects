#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int option;

    cout << "�������� ��������� (1 - 4): ";
    cin >> option;
    cout << endl;

    switch (option) {
        case 1:
            cout << "��������� ��� ������� ����������� ��������� Ax^2 + Bx +\n"
                    "C = 0. A, B � C �������� � ����������. ��������� ��������� �� �����." << endl;

            float A, B, C, d, sqrd, x1, x2;

            cout << "������� A: ";
            cin >> A;
            cout << endl;

            cout << "������� B: ";
            cin >> B;
            cout << endl;

            cout << "������� C: ";
            cin >> C;
            cout << endl;

            cout << A << "x^2 + " << B << "x + " << C << " = 0" << endl;

            d = (pow(B, 2)) - (4 * A * C);
            cout << "������������: " << d << endl;

            sqrd = sqrt(d);

            if (d < 0) {
                cout << "������ ���!" << endl;
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
            cout << "������ ��������� a|x|=b." << endl;

            float a, b, x;

            cout << "������� a: ";
            cin >> a;
            cout << endl;

            cout << "������� b: ";
            cin >> b;
            cout << endl;

            x = b / a;

            if (x < 0) {
                cout << "������ ���!" << endl;
            } else if (a == 0 && b != 0) {
                cout << "������ ���!" << endl;
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
            cout << "���������� ������� �� ��������� � ���������� ����������� �����\n"
                    "������ �� 11, 9." << endl;

            int n;

            cout << "������� n: ";
            cin >> n;
            cout << endl;

            cout << n << " / " << "11 = " << n / 11.0f << endl;
            (n % 11 == 0) ? cout << "��, �������." : cout << "���, �� �������.";
            cout << endl;

            cout << n << " / " << "9 = " << n / 9.0f << endl;
            (n % 9 == 0) ? cout << "��, �������." : cout << "���, �� �������.";
            cout << endl;

            break;
        case 4:
            cout << "���������� ���������� ������ � ����������� ����� �� 0 �� 1000." << endl;

            int r, chars, divider;

            cout << "������� r: ";
            cin >> r;
            cout << endl;

            while (r < 0 || r > 1000) {
                cout << "r ������ ���� � ����������: 0 < r < 1000 !!!" << endl;
                cout << "������� r: ";
                cin >> r;
                cout << endl;
            }

//  ������������� ������� ����� �����, ��� ������ ��������� ����, �� ��� ������ ��� �� ��� ��� ����������� � �� �����
//  ������ ��������� �� ����� ��� � ��� ����� ����� ������ �� 0 �� 1000 � ������������ ������� ��� ��� ������.
//  ������� � ������� ���� �������� � ������ �������, �� ������ �� 0 �� 1000.

            divider = 1; // ���������� �������� ��� 1

            while (divider * 10 <= r) { // �������� ������ ��������, �� ������ ���� ������ ��� ����� ������ �����, ��
                divider *= 10;          // ��� ��������� ��������� ������, ����� ��� ���� � ���������
            }

            while (divider >= 1) {      // ��������� � ���-�� ���� +1, ����� �� ������ ����� ����� �������� ������ �����
                chars++;                // ����� ��������� �������� � 10 ���
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

            cout << "���������� ������: " << chars << endl;

            break;
        default:
            cout << "��������� ��� ������� " << option << " ���!" << endl;
    }

    system("pause");
    return 0;

}