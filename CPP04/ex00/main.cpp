#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main()
{
    const Animal* meta = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    
    delete meta;
    delete i;
    delete j;
    return 0;
}