#include <iostream>

using namespace std;
int main() {
    const int Lbs_per_stn = 14;
    int lbs;
// 1 英式 = 14 磅
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds.\n";

    system("pause");
    return 0;
}
