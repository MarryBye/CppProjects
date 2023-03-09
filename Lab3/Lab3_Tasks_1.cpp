#include <iostream>

using namespace std;

int main() {

    cout << "Спортсмен\n"
            "приступает к тренировкам по следующему графику: в первый день он должен пробежать\n"
            "10 км; каждый следующий день следует увеличивать дистанцию на 10% от нормы\n"
            "предыдущего дня. Как только норма достигнет или превысит 25 км, необходимо\n"
            "прекратить её увеличение и далее пробегать ежедневно ровно 25 км. Начиная с\n"
            "какого дня спортсмен будет пробегать 25 км?" << endl;

    float today_distance = 10;
    int day;

    for (day = 1; today_distance < 25; day++) {
        cout << "Day: " << day << " Dist: " << today_distance << endl;
        today_distance += today_distance * 0.1;
    }

    cout << endl;

    cout << "Athlete walked 25 km for the first time, but exceeded the limit on day " << day << endl;
    cout << "Exactly 25 kilometers, athlete will begin to pass on the day " << day + 1 << endl;

    system("pause");
    return 0;

}