#include <iostream>
#include <memory>
#include "convert.h"

using namespace std;


std::unique_ptr<Cat> get_unique_ptr()
{
    std::unique_ptr<Cat> cat_p = std::make_unique<Cat>("local cat");
    return cat_p;
}
int main(int argc, char *argv[])
{   
    /* unique_ptr 转化为 shared_ptr */
    std::unique_ptr<Cat> cp1 = std::make_unique<Cat>("ds");
    std::shared_ptr<Cat> cp2 = std::move(cp1);

    cout << "cp2 use count : " << cp2.use_count() << endl;

    /*  返回的是unique_ptr 接收的是shared_ptr  */
    std::shared_ptr<Cat>cp3 = get_unique_ptr();
    if(cp3)
    {
        cp3->cat_info();
        cout << "cp3 use count : " << cp3.use_count() << endl;
    }

    cout << "------------" << endl;
    return 0;
}
