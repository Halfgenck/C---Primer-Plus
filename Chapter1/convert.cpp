// conver.cpp -- converts stone to pounds
#include <iostream>
using namespace std;
int stonetolb(int);

int main()
{
    int stone ;
    cout << "Enter the weight in stone : ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "stone = ";
    cout << pounds << "punds." << endl;
    return 0;
}
int stonetolb(int stone) 
{
    return 14 *stone;
}
