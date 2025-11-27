#include "Cat.h"

Cat::Cat()
    : Animal()
{
    type = "Cat";
    std::cout << YEL << "Cat " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

Cat::Cat(std::string type)
    : Animal(type)
{
    type = "Cat";
    std::cout << YEL << "Cat " << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

Cat::Cat(const Cat& src)
    : Animal(src.type)
{
    std::cout << YEL << "Cat " << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
        Animal::operator=(rhs);
    std::cout << YEL << "Cat " << BBLUE << "copy assignment called for: " << BGREEN << type << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << YEL << "Cat " << BBLUE << "destructor called for: " << BGREEN << type << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << BGREEN << type << BMAG << ", says Meow" << std::endl;
}
