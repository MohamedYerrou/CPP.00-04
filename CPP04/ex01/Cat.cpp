#include "Cat.h"

Cat::Cat()
    : Animal()
{
    type = "Cat";
    cat = new Brain();
    std::cout << BMAG << "Cat " << BBLUE << "default constructor called for: " << BGREEN << type << std::endl;
}

Cat::Cat(std::string type)
    : Animal(type)
{
    type = "Cat";
    cat = new Brain();
    std::cout << BMAG << "Cat " << BBLUE << "constructor called for: " << BGREEN << type << std::endl;
}

Cat::Cat(const Cat& src)
    : Animal(src.type)
{
    cat = new Brain();
    *cat = *(src.cat);
    std::cout << BMAG << "Cat " << BBLUE << "copy constructor called for: " << BGREEN << type << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        delete cat;
        cat = new Brain();
        *cat = *(rhs.cat);
    }
    std::cout << BMAG << "Cat " << BBLUE << "copy assignment called for: " << BGREEN << type << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << BMAG << "Cat " << BBLUE << "destructor called for: " << BGREEN << type << std::endl;
    delete cat;
}

void    Cat::makeSound() const
{
    std::cout << BGREEN << type << BMAG << ", says Meow" << std::endl;
}
