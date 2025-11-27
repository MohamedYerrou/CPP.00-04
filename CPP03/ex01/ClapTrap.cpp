#include "ClapTrap.h"

ClapTrap::ClapTrap()
    : name("None"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << BBLUE << "ClapTrap default constructor called for: " << BGREEN << name << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << BBLUE << "ClapTrap constructor called for: " << BGREEN << name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
    : name(source.name), Hit_points(source.Hit_points), Energy_points(source.Energy_points), Attack_damage(source.Attack_damage)
{
    std::cout << BBLUE << "ClapTrap copy constructor called for: " << BGREEN << name << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << BBLUE << "ClapTrap copy assignment called: " << BGREEN << name << RESET << std::endl;
    if (this != &rhs)
    {
        name = rhs.name;
        Hit_points = rhs.Hit_points;
        Energy_points = rhs.Energy_points;
        Attack_damage = rhs.Attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << BBLUE << "ClapTrap destructor called for: " << BGREEN << name << RESET << std::endl;
}

const std::string& ClapTrap::getName() const
{
    return name;
}

void    ClapTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout << RESET << "ClapTrap " << BGREEN << name << RESET <<" attacks " << BGREEN << target << RESET <<", causing " << BRED << Attack_damage << " points of damage!" << RESET << std::endl;
    }
    else
        std::cout << RESET << "ClapTrap " << BGREEN << name << RESET << " cannot attack!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points != 0)
    {
        if ((int)Hit_points - (int)amount >= 0)
            Hit_points -= amount;
        else
            Hit_points = 0;
        std::cout << RESET << "ClapTrap " << BGREEN << name << RESET << " took " << BRED << amount << " hit points, " << RESET <<"remaining points " << BGREEN << Hit_points << RESET <<std::endl;
    }
    else
        std::cout << RESET << "ClapTrap " << BGREEN << name << RESET << " can't take damage; because it's " << BMAG << "dead!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_points > 0 && Hit_points > 0)
    {
        Hit_points += amount;
        Energy_points--;
        std::cout << RESET << "ClapTrap " << BGREEN << name << YEL << " Repaired " << BGREEN << amount << RESET << " hit points,  remaining points " << BGREEN << Hit_points << RESET << std::endl;
    }
    else
        std::cout << RESET << "ClapTrap " << BGREEN << name << RESET << " cannot " << YEL << "repair itself!" << RESET << std::endl;
}