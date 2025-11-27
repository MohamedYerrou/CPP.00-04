#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BRED    "\e[1;31m"
# define BGREEN  "\e[1;32m"
# define BBLUE   "\e[1;34m"
# define YEL     "\e[1;33m"
# define BMAG    "\e[1;35m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& src);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal();

        virtual void    makeSound() const;
        const std::string& getType() const;
};

#endif