#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "�������� ���������, ������� �����\n"
            "��������� ����� x � ������� y, �������� �\n"
            "����������,\n"
            "��� ������������� ����������� ������� pow()." << endl;

    int x, y, i;
    int ans = 1;

    cout << "������� x: ";
    cin >> x;
    cout << endl;

    cout << "������� y: ";
    cin >> y;
    cout << endl;

    if (x == 0 && y == 0) {
        cout << "�������� ������������!" << endl;
    } else {
        for (i = 0; i < y; i++) {
            ans *= x;
        }

        cout << x << "^" << y << " = " << ans << endl;
    }

    system("pause");
    return 0;

}