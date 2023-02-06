#include <iostream>

using namespace std;

#define ZERO 0

#include <climits>

int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposoted." << endl;
    cout << "Add $1 to each acount." << endl << "Now ";
    sam += 1;
    sue += 1;
    cout << "Sam has " << sam <<" dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam !" << endl;
    
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposoted." << endl;
    cout << "Take $1 to each acount." << endl << "Now ";

    sam -= 1;
    sue -= 1;
    cout << "Sam has " << sam <<" dollars and Sue has " << sue;
    cout << " dollars deposited.\nLucky sue !" << endl;
    
    return 0;
}

/**
 * 有符号  -32768 - 32768
 * 无符号  0 - 65535     
 * 溢出点  32767 + 1 = -32768  -32768 - 1 = 32767
 * 有符号  65535
 * 无符号
*/