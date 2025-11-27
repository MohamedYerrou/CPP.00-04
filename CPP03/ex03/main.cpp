#include "DiamondTrap.h"

int main()
{
    DiamondTrap    diamond1("diamond1");
    DiamondTrap    diamond2("diamond2");

    diamond1.takeDamage(10);
    diamond2.guardGate();
    diamond1.attack(diamond2.getName());
    diamond1.highFivesGuys();
    diamond1.takeDamage(90);
    diamond1.beRepaired(20);
    diamond1.whoAmI();
    // ClapTrap* clap = new DiamondTrap("Mohamed");
    // delete clap;
    return 0;
}