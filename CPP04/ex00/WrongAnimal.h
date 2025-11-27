#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BRED    "\e[1;31m"
# define BGREEN  "\e[1;32m"
# define BBLUE   "\e[1;34m"
# define YEL     "\e[1;33m"
# define BMAG    "\e[1;35m"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        virtual ~WrongAnimal();

        void    makeSound() const;
        const std::string& getType() const;
};

#endif