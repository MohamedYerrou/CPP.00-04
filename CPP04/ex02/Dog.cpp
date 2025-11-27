#include "Dog.h"

Dog::Dog()
    : Animal()
{
    type = "Dog";
    std::cout << YEL << "Dog " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type)
{
    type = "Dog";
    std::cout << YEL << "Dog " << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

Dog::Dog(const Dog& src)
    : Animal(src.type)
{
    std::cout << YEL << "Dog " << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
        Animal::operator=(rhs);
    std::cout << YEL << "Dog " << BBLUE << "copy assignment operator called for: " << BGREEN << type << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << YEL << "Dog " << BBLUE << "destructor called for: " << BGREEN << type << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << BGREEN << type << BMAG <<", says Woof" << std::endl;
}
