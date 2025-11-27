#include "Animal.h"

Animal::Animal()
    : type("None")
{
    std::cout << BRED << "Animal " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

Animal::Animal(std::string type)
    : type(type)
{
    std::cout << "Animal constructor called for: " << BGREEN << type << std::endl;
}

Animal::Animal(const Animal& src)
    : type(src.type)
{
    std::cout << "Animal copy constructor called for: " << BGREEN << type << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal copy assignment operator called for: " << BGREEN << type << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << BRED << "Animal " << BBLUE << "Destructor called for: " << BGREEN << type << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << BGREEN << type << BMAG << "Animal sound" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}
