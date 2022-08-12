#include <iostream>
#include <memory>
#include "convert.h"

using namespace std;

/* use by value */
void do_with_cat_pass_value(std::unique_ptr<Cat> c)
{
    /*  函数结束，指针消失了，不建议  */
    c->cat_info();
}

/* use by ref  常用 */
void do_with_cat_pass_ref(const std::unique_ptr<Cat> &c)
{
    c->set_cat_name("Jackie");
    c->cat_info();
}

/*  链式 不建议使用 */
std::unique_ptr<Cat> get_unique_ptr()
{
    std::unique_ptr<Cat> p_dog = std::make_unique<Cat>("Loacal");
    /*  函数结束的时候，会释放指针  */
    return p_dog;
}

int main(int argc, char *argv[])
{
    /*  栈  */
    // Cat c1("ok");
    // c1.cat_info();
    // {
    //     /*  退出此作用域之后，会执行析构函数 */
    //     Cat c1("ok");
    //     c1.cat_info();
    // }

    /*  
        原始指针  
        这种情况下，main函数退出，指针未销毁
    */
    // Cat *pc_1 = new Cat("yy");
    // pc_1->cat_info();
    // {
    //     Cat *pc_1 = new Cat("yy");
    //     pc_1->cat_info();
    // }

    /*  
        原始指针  
        手动删除指针
    */
    // Cat *pc_1 = new Cat("yy");
    // pc_1->cat_info();
    // {
    //     Cat *pc_1 = new Cat("yy");
    //     pc_1->cat_info();
    //     delete pc_1;
    // }
    // delete pc_1;

    /*  unique_pointer创建的3个方式  */
    /*  一、通过原有基本指针创建  */
    // Cat *cp_2 = new Cat("ys");
    // unique_ptr<Cat> u_c_p2(cp_2);

    /* 下面的代码会使得unique_ptr失效，即一个对象被多个指针所指向, 不推荐*/
    // cp_2->cat_info();
    // u_c_p2->cat_info();
    // cp_2->set_cat_name("dvb");
    // u_c_p2->cat_info();

    /*  二、通过unique_ptr直接创建  */
    // unique_ptr<Cat> u_c_p3 {new Cat("da")};
    // unique_ptr<int> u_i_p3 {new int(10)};
    
    // u_c_p3->cat_info();
    // u_c_p3->set_cat_name("oo");
    // u_c_p3->cat_info();

    // cout << "Cat address" << u_c_p3.get() << endl; /*   获取指针的地址  */
    // cout << "int address" << u_i_p3.get() << endl; /*   获取指针的地址  */

    // /*  三、通过make_unique创建 */
    // unique_ptr<Cat> u_c_p4 = make_unique<Cat>("JJ");
    // unique_ptr<int> u_i_p4 = make_unique<int>(10);
    //   /*  调用cat的默认构造函数   */
    // u_c_p4->cat_info();
    // u_c_p4->set_cat_name("oo");
    // u_c_p4->cat_info();

    // cout << "Cat address" << u_c_p4.get() << endl; /*   获取指针的地址  */
    // cout << "int address" << u_i_p4.get() << endl; /*   获取指针的地址  */

    /* 测试move */
    // unique_ptr<Cat> c1 = make_unique<Cat>("JJ");
    // do_with_cat_pass_value(std::move(c1));
    // do_with_cat_pass_value(make_unique<Cat>("ll")); /* 默认转换为move  */

    /* pass ref */
    // unique_ptr<Cat> c2 = make_unique<Cat>("JJ");
    // do_with_cat_pass_ref(c2);
    // c2->cat_info(); 

    /* use fun  */
    get_unique_ptr()->cat_info();
    cout << "------------" << endl;
    return 0;
}
/*  程序结束之后，也会执行析构函数 */