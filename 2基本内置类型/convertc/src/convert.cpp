#include <iostream>
#include <string>
using namespace std;

// int main()
// {
//     unsigned char i = -1;
//     /*计算机补码计算得到 i = 255*/
//     /*有符号加无符号，由符号的值会变为无符号值再加*/
//     cout << i << endl;
//     return 0;
// }

// int main()
// {
//     for(int i=10; i>=0; --i)
//     {
//         cout << i << endl;
//     }
//     /*有符号加无符号，由符号的值会变为无符号值再加*/
//     return 0;
// }

// int main()
// {
//     /* \后是8进制 \x 后是16进制*/
//     string m = "who goes with F\145rgus?\012";
//     cout << m << endl;
//     return 0;
// }

// int main()
// {
//     /* 列表初始化 */
//     int a = 10;
//     int b = {10};
//     int c{10};
//     int i = 3.14;
//     cout << i << endl;
//     double ld = 3.13435343253;
//     int sl{ld} , sx{ld};
//     cout << sl << endl;
//     return 0;
// }

// int a = 100;
// int main()
// {
//     /*  显示访问全局变量::  */ 
//     int a = 50;
//     cout << a << endl;
//     ::a = (::a) + 1;
//     cout << ::a << endl;
//     return 0;
// }

int main()
{
    int a = 10;
    int b = 20;

    int *x = &a;
    int *y = &b;

    x = &b;
    // y指向b的地址，当*y 改变的时候，b也改变了，此时x 指向的是b的地址，所以*x = 10
    *y = a;
    cout << *x << endl;
    cout << *y << endl;

    return 0;
}