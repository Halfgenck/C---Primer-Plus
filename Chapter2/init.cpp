#include <iostream>

using namespace std;
int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; //int 转 float 咩问题
    int guess(3.9832);   //将double转化为int ，丢失精度 
    int debt = 7.2e12;   //溢出
    
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    system("pause");
    return 0;

    /*
    tree = 3.000000
    guess = 3 
    debt = 2147483647  32位的极限
    */


   /**
    * 类型转化：
    * 列表初始化
    * c++11以后
    * 允许 int - > float 以及不同的long/short/int转化 
    * cosnt int ccode = 666;
    * int x = 66;
    * == int x {66}
    * 
    * char c1 {31325};
    * //char c2{66};  缩进可能会导致变量类型无法表示赋给它的值
    * char c4 {x} //可能会出现错误，因为x可能无法被编译器识别值，他会认为是一个很大的值
    * x = 123 ;
    * char c5 {x} 就可以 
    * 整形提升：
    * long double - > double - > float - > unsigned / signed(看相同类型的两个数哪个级别更高，若不同，则看谁能表示谁，就转化为不能表示的) - > unsigned
    * 强制类型转化：
    * （typename）value / typename(value)
    * static_cast<typename>(value)
    *         
    * 
   */
  
   
}
