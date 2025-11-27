#include "Cat.h"
#include "Dog.h"

int main()
{
    Animal* animals[20];
    for (int i = 0; i < 10; i++)
        animals[i] = new Dog();
    for (int i = 10; i < 20; i++)
        animals[i] = new Cat();
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
            std::cout << BBLUE << "0";
        std::cout << BBLUE << i << "->";
        animals[i]->makeSound();
    }
    for (int i = 0; i < 20; i++)
        delete animals[i];
    return 0;
}