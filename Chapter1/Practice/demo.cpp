/**
 * C++程序的模块 === 函数
 * #include <iostream> 是用来调用函数库
 * using namespace std 是调用名称空间std
 * 
 * 
*/

#include <iostream> 

using namespace std;
int froop ( double tr );
void rattle ( int n );
int prine ( void ) ;
int main() {
    cout << "hello world ! " << endl;
    int cheeses ;
    cheeses = 32;
    cin >> cheeses;
    cout << "We have " << cheeses << "varieties of cheese";

    return 0;

}

// cout << "hello "报错
/**
 * 没有写头文件
 * 没有使用名称空间std;
 * 没有名称空间的情况下，因改写成std::cout
*/
