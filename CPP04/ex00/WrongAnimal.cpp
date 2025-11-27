#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
    : type("None")
{
    std::cout << BRED << "WrongAnimal " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
    : type(type)
{
    std::cout << BRED << "WrongAnimal " << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
    : type(src.type)
{
    std::cout << BRED << "WrongAnimal " << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << BRED << "WrongAnimal " << BBLUE << "copy assignment operator called for: " << BGREEN << type << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BRED << "WrongAnimal " << BBLUE << "Destructor called for: " << BGREEN << type << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << BGREEN << type << BMAG << ", WrongAnimal sound" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return type;
}
