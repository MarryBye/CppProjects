#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "��������� ���������� � ����������� �� ���������� �������: � ������ ���� �� ������ ���������\n"
            "10 ��; ������ ��������� ���� ������� ����������� ��������� �� 10% �� �����\n"
            "����������� ���. ��� ������ ����� ��������� ��� �������� 25 ��, ����������\n"
            "���������� � ���������� � ����� ��������� ��������� ����� 25 ��. ������� �\n"
            "������ ��� ��������� ����� ��������� 25 ��?" << endl;

    float today_distance = 10;
    int day;

    for (day = 1; today_distance < 25; day++) {
        cout << "����: " << day << " ���������: " << today_distance << endl;
        today_distance += today_distance * 0.1;
    }

    cout << endl;

    cout << "����� ������ 25 ����������, �� �� ����� �� " << day << " ����." << endl;
    cout << "����� 25 ���������� �� ������ ��������� � " << day + 1 << " ���." << endl;

    system("pause");
    return 0;

}