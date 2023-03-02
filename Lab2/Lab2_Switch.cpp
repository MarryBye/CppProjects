#include <iostream>

using namespace std;

int main()
{

    cout << "The program is needed to convert UAH in other currency (dollars, euros, rubles)" << endl;
    cout << "For the calculation, you need to enter amount of hryvnia and and convert type.\n" << endl;

    float UAH_to_convert = 0;
    int operation;

    cout << "Enter the amount of hryvnia to convert: ";
    cin >> UAH_to_convert;
    cout << endl;

    cout << "Choose convert operation (1 - to dollars, 2 - to euros, 3 - to rubles): ";
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