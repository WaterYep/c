#include <iostream>
#include <tuple>
#include <cxxabi.h> 
#include <functional>

using namespace std;

int main()
{
    /* tuple默认构造函数是直接初始化的 */
    tuple<size_t, size_t, size_t> threeD{1,2,3};

    /* 数据操作 */
    auto num = get<0>(threeD);
    cout << "threeD[0] = " << num << endl;
    /* 获取元素的个数 */
    cout << tuple_size<decltype(threeD)>::value << "\n"; 
    /* 得到类型名 */
    cout << abi::__cxa_demangle(typeid(decltype(threeD)).name(), NULL, NULL, NULL) << endl;

    /* tie可以让tuple变量中的三个值依次赋到tie中的三个变量中 */
    int one, two ,three;
    tuple<int, int, int> t(1, 20, 3);
    tie(one, two, three) = t;
    cout << one << two << three << "\n"; 
    /* std::ignore 可以通过std::ignore进行变量占位，这样将会忽略提取对应的元素*/
    int a, b, c;
    tie(a, b, std::ignore) = t;
    cout << a << b << c << "\n"; 

    /* 通过引用搭配make_tuple()可以提取tuple的元素值，将某些变量值设给它们，并通过改变这些变量来改变tuple元素的值： */
    std::tuple<std::string, int, float> tpl("seven", 77, 66.1);
    string name;
    int weight;
    float f;

    auto tp2 = make_tuple(ref(name), ref(weight), ref(f)) = tpl;
    std::cout << "Before change: " << '\n';
    std::cout << "name: " << name << ", ";
    std::cout << "weight: " << weight << ", ";
    std::cout << "f: " << f << '\n';
 
    name = "Sven";
    weight = 80;
    f = 3.14;
 
	std::cout << "After change: " << '\n';
	std::cout << "name: " << std::get<0>(tp2) << ", ";
	std::cout << "weight: " << std::get<1>(tp2) << ", ";
	std::cout << "f: " << std::get<2>(tp2) << '\n';

    return 0;
}