#include <iostream>

using namespace std;

int main() {
    short int x  = SHRT_MAX;
    int x1 = INT_MAX;
    long x2 = LONG_MAX;
    long long x3 = LLONG_MAX;

    cout << "long is " << sizeof(x2) <<"bytes" << endl;
    cout << "int is " << sizeof(x1) <<"bytes" << endl;
    cout << "short is " << sizeof(x) <<"bytes" << endl;

    cout << endl;

    cout << "Value :" << endl;
    cout << "short int value :" << x << endl;
    cout << "int Value :" << x1 << endl;
    cout << "long int Value :" << x2 << endl;
    cout << "long long int Value :" << x3 << endl;

    return 0;


}
