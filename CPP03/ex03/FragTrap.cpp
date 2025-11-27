#include "FragTrap.h"

FragTrap::FragTrap()
    : ClapTrap()
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << BBLUE << "FragTrap default constructor called for: " << BGREEN << name << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << BBLUE << "FragTrap constructor called for: " << BGREEN << name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
    : ClapTrap(src)
{
    std::cout << BBLUE << "FragTrap copy constructor called for: " << BGREEN << name << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << BBLUE << "FragTrap copy assignment called for: " << BGREEN << name << RESET << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << BBLUE << "FragTrap destructor called for: " << BGREEN << name << RESET << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && Hit_points > 0)
    {
        std::cout << RESET << "FragTrap " << BGREEN << name << RESET <<" attacks " << BGREEN << target << RESET <<", causing " << BRED << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
    else
        std::cout << RESET << "FragTrap " << BGREEN << name << RESET << " cannot attack!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << BMAG << "High five!" << RESET << std::endl;
}