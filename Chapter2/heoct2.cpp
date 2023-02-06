#include <iostream>

using namespace std;

int main() {
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure !\n " ;

    cout << "chest = " << chest << " (decimal for 42) \n";
    cout << hex;  //改变编码方式
    cout << "waist = " << waist << " (hexadecomal for 42) \n";
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42) \n";
    return 0;
    

}