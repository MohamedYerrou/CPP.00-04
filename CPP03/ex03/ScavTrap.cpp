#include "ScavTrap.h"

ScavTrap::ScavTrap()
    : ClapTrap()
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << BBLUE << "ScavTrap default constructor called for: "<< BGREEN << name << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << BBLUE << "ScavTrap constructor called for: " << BGREEN << name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source)
    : ClapTrap(source)
{
    std::cout << BBLUE << "ScavTrap copy constructor called for: " << BGREEN << name << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << BBLUE <<"ScavTrap copy assignment called: " << BGREEN << name << RESET << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << BBLUE <<"ScavTrap destructor called for: " << BGREEN << name << RESET << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout << RESET << "ScavTrap " << BGREEN << name << RESET <<" attacks " << BGREEN << target << RESET <<", causing " << BRED << Attack_damage << " points of damage!" << RESET << std::endl;
    }
    else
        std::cout << RESET << "ScavTrap " << BGREEN << name << RESET << " cannot attack!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << RESET << "ScavTrap " << BGREEN << name << RESET << " is now in" << BMAG << " Gate keeper" << RESET << " mode" << std::endl;
}
