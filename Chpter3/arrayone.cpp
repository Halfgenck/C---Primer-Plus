#include<iostream>

int main() {
    using namespace std;
    int yams[3] = {7,8,6};
    int yamcost[3] = {20,30,5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl; // 21
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcost[1] << " cents per yam.\n";
    int total = yams[0] * yamcost[0] + yams[1] *  yamcost[1] + yams[2] * yamcost[2];
    cout << "The total yam expense is " << total << " cents.\n";
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout <<" bytes.\n";
    return 0;
    
}