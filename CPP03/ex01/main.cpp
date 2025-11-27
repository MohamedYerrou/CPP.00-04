#include "ScavTrap.h"

int main()
{
    ScavTrap    scav1("scav1");
    ScavTrap    scav2("scav2");

    scav1.takeDamage(50);
    scav1.attack(scav2.getName());
    scav1.takeDamage(50);
    scav2.guardGate();
    scav1.takeDamage(5);
    scav1.beRepaired(4);
    return 0;
}