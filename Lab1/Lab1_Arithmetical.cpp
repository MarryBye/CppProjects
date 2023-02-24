#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << "The program is needed to calculate the value of an equation with numbers that the user enters." << endl;
    cout << "For the calculation, you need to enter 2 numbers x and y.." << endl;

    cout << "10: z = (2cos(x - pi / 6) / 0.5 + sin^2y)* (1 + x^2 / 3 - y^2 / 5))" << endl;

    float x = 0;
    float y = 0;

    cout << "\nEnter X: ";
    cin >> x;

    cout << "\nEnter Y: ";
    cin >> y;

    float result_1 = 2 * cos(x - M_PI / 6);
    float result_2 = 0.5 + pow(sin(y), 2);
    float result_3 = pow(x, 2);
    float result_4 = 3 - pow(y, 2) / 5;

    float result = result_1 / result_2 * (1 + result_3 / result_4);

    cout << "\nResult is: " << result << endl;

    system("pause");
    return 0;

}