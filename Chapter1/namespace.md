using namespace std 放在函数定义前，让文件中所有的函数都能够使用名称空间std中的所有元素
using namespace std 放在函数内部，让该函数能够使用名称空间std中的所有元素
在特定的函数中使用类似与using std::cout这种指令，而不是using namespace std，让函数能够使用指定的元素
不使用using指令， 而在选哟使用的名称空间std中的元素时候，可以使用std::前缀
如下所示：
std::cout << "hello" << std::endl; 

