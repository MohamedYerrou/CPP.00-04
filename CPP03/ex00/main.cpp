#include "ClapTrap.h"

int main()
{
    ClapTrap    clap1("clap1");
    ClapTrap    clap2("clap2");

    clap1.takeDamage(5);
    clap1.attack(clap2.getName());
    clap1.takeDamage(5);
    clap1.beRepaired(4);
    clap2.takeDamage(10);
    clap2.attack(clap1.getName());
    clap2.takeDamage(5);
    clap2.beRepaired(4);
    return 0;
}