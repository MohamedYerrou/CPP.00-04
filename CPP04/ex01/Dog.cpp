#include "Dog.h"

Dog::Dog()
    : Animal()
{
    type = "Dog";
    dog = new Brain();
    std::cout << BMAG << "Dog " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type)
{
    type = "Dog";
    dog = new Brain();
    std::cout << BMAG << "Dog " << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

Dog::Dog(const Dog& src)
    : Animal(src.type)
{
    dog = new Brain();
    *dog = *(src.dog);
    std::cout << BMAG << "Dog " << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        delete dog;
        dog = new Brain();
        *dog = *(rhs.dog);
    }
    std::cout << BMAG << "Dog " << BBLUE << "copy assignment operator called for: " << BGREEN << type << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << BMAG << "Dog " << BBLUE << "destructor called for: " << BGREEN << type << std::endl;
    delete dog;
}

void    Dog::makeSound() const
{
    std::cout << BGREEN << type << BMAG <<", says Woof" << std::endl;
}
