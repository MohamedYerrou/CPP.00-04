#include "WrongCat.h"

WrongCat::WrongCat()
    : WrongAnimal()
{
    type = "WrongCat";
    std::cout << YEL << "WrongCat" << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

WrongCat::WrongCat(std::string type)
    : WrongAnimal(type)
{
    type = "WrongCat";
    std::cout << YEL << "WrongCat" << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
    : WrongAnimal(src.type)
{
    std::cout << YEL << "WrongCat" << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    if (this != &rhs)
        WrongAnimal::operator=(rhs);
    std::cout << YEL << "WrongCat" << BBLUE << "copy assignment called for: " << BGREEN << type << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << YEL << "WrongCat" << BBLUE << "destructor called for: " << BGREEN << type << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << BMAG << type << ", says Meow" << std::endl;
}
