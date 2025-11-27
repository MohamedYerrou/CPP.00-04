#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BRED    "\e[1;31m"
# define BGREEN  "\e[1;32m"
# define BBLUE   "\e[1;34m"
# define YEL     "\e[1;33m"
# define BMAG    "\e[1;35m"

class ClapTrap
{
    private:
        std::string name;
        unsigned int    Hit_points;
        unsigned int    Energy_points;
        unsigned int    Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& source);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        const std::string& getName() const;
};

#endif