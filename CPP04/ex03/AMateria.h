#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BRED    "\e[1;31m"
# define BGREEN  "\e[1;32m"
# define BBLUE   "\e[1;34m"
# define YEL     "\e[1;33m"
# define BMAG    "\e[1;35m"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& src);
        AMateria&   operator=(const AMateria& rhs);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif