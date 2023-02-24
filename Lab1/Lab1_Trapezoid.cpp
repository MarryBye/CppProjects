#include <iostream>

using namespace std;

int main()
{

    cout << "The program is needed to calculate the area of a trapezoid." << endl;
    cout << "For the calculation, you need the height and base of the figure." << endl;

    float height = 0;
    float base_first = 0;
    float base_second = 0;

    cout << "\nEnter height: ";
    cin >> height;

    cout << "\nEnter base 1: ";
    cin >> base_first;

    cout << "\nEnter base 2: ";
    cin >> base_second;

    float area = (height * (base_first + base_second)) / 2;

    cout << "\n3The area of a trapezoid with height = " << height << ", base 1 = " << base_first << ", base 2 = "
    << base_second << " is " << area << endl;

    system("pause");
    return 0;

}