// #long 转化为 码 1 long = 220 码

#include <iostream> 
using namespace std;

int main() {
    int x ;
    cout << "请输入距离为多少long :";
    cin >> x;
    int y = x * 220 ;
    cout << "您的距离为 " << x << " long, " << "为 " << y << "码" << endl;
    return 0;
}