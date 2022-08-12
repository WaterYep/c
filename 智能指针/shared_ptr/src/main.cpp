#include <iostream>
#include <memory>
#include "convert.h"

using namespace std;

void cat_by_value(std::shared_ptr<Cat> cat)
{
    cout << cat->get_name() << endl;
    /*  指针所指的内容会改变  */
    cat->set_cat_name("ee");
    cout << "func use count inside: " << cat.use_count() << endl;
    /*  函数退出时，会销毁指针  */
}

void cat_by_ref(const std::shared_ptr<Cat> &cat)
{
    /* 引用不会增加指针数量 */
    cout << cat->get_name() << endl;
    /*  指针所指的内容会改变  */
    cat->set_cat_name("ee");
    cout << "func use count inside: " << cat.use_count() << endl;
}

std::shared_ptr<Cat> get_shared_ptr()
{
    std::shared_ptr<Cat> cat_p = std::make_shared<Cat>("local cat");
    return cat_p;
}
int main(int argc, char *argv[])
{
    // /*  常量可以用new 创建*/
    // std::shared_ptr<int> i_s_1 = make_shared<int>(10);
    // cout << "i_s_1 value : " << *i_s_1 << endl;
    // cout << "i_s_1 use count : " << i_s_1.use_count() << endl;

    // std::shared_ptr<int> i_s_2 = i_s_1;
    // cout << "i_s_1 use count : " << i_s_1.use_count() << endl;
    // cout << "i_s_2 use count : " << i_s_2.use_count() << endl;

    // *i_s_2 = 20;
    // cout << "i_s_1 value : " << *i_s_1 << endl;
    // cout << "i_s_2 value : " << *i_s_2 << endl;

    // /*  只清理i_s_1  */
    // i_s_1 = nullptr;
    // cout << "i_s_1 use count : " << i_s_1.use_count() << endl;
    // cout << "i_s_2 use count : " << i_s_2.use_count() << endl;

    // /*  自定义类型  */
    // std::shared_ptr<Cat> c_s_1 = make_shared<Cat>("lx");
    // cout << "c_s_1 use count : " << c_s_1.use_count() << endl;
    // std::shared_ptr<Cat> c_s_2 = c_s_1;
    // std::shared_ptr<Cat> c_s_3 = c_s_1;

    // cout << "c_s_1 use count : " << c_s_1.use_count() << endl;
    // cout << "c_s_2 use count : " << c_s_1.use_count() << endl;
    // cout << "c_s_3 use count : " << c_s_1.use_count() << endl;

    // /*  只销毁一次  */
    // cout << "---------------------------" << endl;

    /*  pass by value   */
    // std::shared_ptr<Cat> c1 = make_shared<Cat>("dd");
    // cat_by_value(c1);
    // c1->cat_info();
    // cout << "c1 use count outside: " << c1.use_count() << endl;

    /*  pass by ref   */
    // cat_by_ref(c1);
    // c1->cat_info();

    /* return ptr */
    // auto c_p = get_shared_ptr();
    // c_p -> cat_info();
    /* 链式 */
    get_shared_ptr()->cat_info();
    
    cout << "------------" << endl;
    return 0;
}
