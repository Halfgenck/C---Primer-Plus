#include <iostream>
#include <cstring>
int main () {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char dessert[Size];

    cout << "Enter your name:\n";
    cin >> name1;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert ;
    cout << "I hava some delicious " << dessert ;
    cout << " for , " << name1 << ".\n" ;
    return 0;

}