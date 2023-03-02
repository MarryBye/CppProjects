#include <iostream>

using namespace std;

int main()
{

    float UAH_to_convert = 0;
    int operation;

    cout << "\nEnter the amount of hryvnia to convert: ";
    cin >> UAH_to_convert;
    cout << endl;

    cout << "\nChoose convert operation (1 - to dollars, 2 - to euros, 3 - to rubles): ";
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