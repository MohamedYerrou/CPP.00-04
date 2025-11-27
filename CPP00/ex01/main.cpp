#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   contact;
    std::string command;

    while (true)
    {
        std::cout << "Enter an option:(ADD, SEARCH or EXIT): ";
        std::cin >> command;
        if (command == "ADD")
            contact.ADD();
        else if (command == "SEARCH")
            contact.SEARCH();
        else if (command == "EXIT")
        {
            std::cout << "successfully exited the program!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again!" << std::endl;
    }
    return (0);
}