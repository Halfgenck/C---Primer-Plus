#include <iostream>
using namespace std;

void smion(int);
int main() {
    smion(23);
    cout << "Pick an integer : ";
    int count;
    cin >> count;
    smion(count);
    cout << "Done !" << endl;
    return 0;

}

void smion(int n) {
    cout << "Smion says touch your toes " << n << " times." <<endl;
}