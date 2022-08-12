#include <iostream>
#include <memory>
#include <cxxabi.h> 

/*  仿函数：一个类，内部重载() 
    转换函数：operator + type 比如：
    inline constexpr operator retType_11_16 () const noexcept
    {
      return __invoke;
    }
*/

int main(int argc, char *argv[])
{   
    
    // /* 这里使用新的 using 别名语法定义了 void(*) 的模板别名 Funptr */
    // using Funptr = void(*)(int);
    // /* lambda 隐函数 */
    // Funptr f = [](int a) {std::cout << a << std::endl;};
    // // auto f = [](int a) {std::cout << a << std::endl;};
    // f(5);
    // /* typeid(f).name()可以用来返回变量的数据类型 */
    // /* gcc编译器特殊处理 */
    // std::cout << abi::__cxa_demangle(typeid(f).name(), NULL, NULL, NULL) << std::endl;

    int b;
    /*  lambda 隐函数 
        引用捕获&b，而引用捕获，创建的是一个引用/指针，指向了原来的变量，
        lambda函数体中操作的就是变量本身, 值捕获创建了一个临时对象，拷贝了原变量的值，
        之后，这个临时变量与原来的变量再无任何瓜葛，lambda中操作的是这个临时变量。
        而引用捕获，创建的是一个引用/指针，指向了原来的变量，lambda函数体中操作的就是变量本身。
    */
    auto f = [&b](int a) 
    {
        std::cout << a << std::endl;
        b = 10;
    };
    // auto f = [](int a) {std::cout << a << std::endl;};
    f(5);
    /* typeid(f).name()可以用来返回变量的数据类型 */
    /* gcc编译器特殊处理 */
    std::cout << b << std::endl;
    return 0;
}
