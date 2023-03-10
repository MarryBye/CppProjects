#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "��������� ����� ��� ����������� ������ � ������ ������." << endl;
    cout << "��� ���������� ������� ����� � ������� � ��� ��������.\n" << endl;

    float UAH_to_convert = 0;
    int operation;

    cout << "������� ����� � �������: ";
    cin >> UAH_to_convert;
    cout << endl;

    cout << "�������� ��� �������� (1 - � �������, 2 - � ����, 3 - � �����): ";
    cin >> operation;
    cout << endl;

    switch (operation) {
        case 1:
            cout << UAH_to_convert << " UAH = " << UAH_to_convert / 37.05 << " DLR" << endl;
            break;
        case 2:
            cout << UAH_to_convert << " UAH = "  << UAH_to_convert / 39.42 << " EUR" << endl;
            break;
        case 3:
            cout << UAH_to_convert << " UAH = "  << UAH_to_convert / 0.49 << " RUB" << endl;
            break;
        default:
            cout << UAH_to_convert << " UAH = "  << UAH_to_convert / 37.05 << " DLR" << endl;
            break;
    }

    system("pause");
    return 0;

}