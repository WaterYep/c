#include <iostream>
#include <string>
#include <vector>
#include "convert.h"
using namespace std;

Cat::Cat(string name) : name(name)
{
    cout << "Constructior of cat : " << name << endl;
}

Cat::~Cat()
{
    cout << "Destructior of cat : " << name << endl;
}