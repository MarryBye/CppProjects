#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "��������� ����� ��� ���������� ������� ��������." << endl;
    cout << "��� ��������� ����� ������ � ��� ��������� ������.\n" << endl;

    float height = 0;
    float base_first = 0;
    float base_second = 0;

    cout << "������� ������: ";
    cin >> height;
    cout << endl;

    cout << "������� ������ ���������: ";
    cin >> base_first;
    cout << endl;

    cout << "������� ������ ���������: ";
    cin >> base_second;
    cout << endl;

    float area = (height * (base_first + base_second)) / 2;

    cout << "������� ��������: " << area << endl;

    system("pause");
    return 0;

}