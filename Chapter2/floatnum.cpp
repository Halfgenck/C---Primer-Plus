#include <iostream>

using namespace std;
int main() {
    //float : 32   double : 64  long duble : 80/96/128 按有效位和允许的指数最小范围来描述 
    //ios_base类封装了C++标准中的流输入输出中不依赖于读写的数据的类型的基本信息
    //cout.setf()的作用是通过设置格式标志来控制输出形式，
    //其中ios_base::fixed表示：用正常的记数方法显示浮点数(与科学计数法相对应)；
    //ios_base::floatfield表示小数点后保留6位小数。
    cout.setf(ios_base::fixed,ios_base::floatfield); //fiexed-point
    float tub = 10.0 / 3.0;  //good to about 6 place 6  有7位的有效
    double mint = 10.0 / 3.0;  //保证15有效

    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << " a million tubs = " << million * tub;
    cout << " \nand ten millon tubs = " ;
    cout << "10 * million tubs = " << million * tub << endl;

    cout << "mint = " << mint << " and a million mints = " ;
    cout << million * mint << endl;
    system("pause");
    return 0;

    //从结果上可以看出float 扩大 1e6后，第八位发生精度的丢失
    //double系统保证了15位有效，所以并没有丢失精度
    /*
    tub = 3.333333 a million tubs = 3333333.250000
    and ten millon tubs = 10 * million tubs = 3333333.250000
    mint = 3.333333 and a million mints = 3333333.333333
    */
}
