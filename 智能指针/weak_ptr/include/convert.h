#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <memory>

class Cat
{
public:
    Cat(std::string name);
    Cat() = default;
    ~Cat();

    void cat_info() const
    {
        std::cout << "cat info name " << name << std::endl;
    }

    std::string get_name() const
    {
        return name;
    }

    void set_cat_name(const std::string &name)
    {
        this->name = name;
    }

    void set_friend(const std::shared_ptr<Cat> c)
    {
        this->m_friend = c;
    }
private:
    std::string name{"Mimi"};
    std::weak_ptr<Cat> m_friend;
};
#endif