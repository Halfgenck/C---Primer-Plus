#include <iostream>

using namespace std;
int main() {
    
    float a = 2.34e+22f;
    float b = 1.0f  + a ;

    cout << "a = " << a << endl;
    cout <<"b - a = " << b - a << endl; 

/*
由于float 7位有效位，所以当浮点数已经到23位的时候，再加1，对float显示无影响
*/

    system("pause");
    return 0;
}
