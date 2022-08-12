#include <iostream>
#include <memory>
#include "convert.h"

using namespace std;

int main(int argc, char *argv[])
{   
    /*  创建weak_ptr的方法  */
    shared_ptr<Cat> cp1 = make_shared<Cat>("C1");
    weak_ptr<Cat> w_p_c(cp1);

    /* weak_ptr 计数不会加一 */
    cout << "w_p_c use count : " << w_p_c.use_count() << endl;
    cout << "cp1 use count : " << cp1.use_count() << endl;

    /* weak_ptr 转换为shared_ptr */
    shared_ptr<Cat> cp2 = w_p_c.lock();
    cout << "w_p_c use count : " << w_p_c.use_count() << endl;
    cout << "cp1 use count : " << cp1.use_count() << endl;
    cout << "cp2 use count : " << cp1.use_count() << endl;

    shared_ptr<Cat> cp3 = make_shared<Cat>("C3");
    shared_ptr<Cat> cp4 = make_shared<Cat>("C4");

    /* 循环依赖 bug 使用weak_ptr避免*/
    cp3->set_friend(cp4);
    cp4->set_friend(cp3);
    cout << "------------" << endl;
    return 0;
}
