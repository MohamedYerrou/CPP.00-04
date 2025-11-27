#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
    : CurrentIndex(0), TotalContacts(0)
{
}

void    PhoneBook::ADD()
{
    Contact NewContact;
    std::string input;

    std::cin.ignore(10000, '\n');
    std::cout << "Enter your first name: ";
    std::getline(std::cin, input);
    NewContact.setFirstName(input);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, input);
    NewContact.setLastName(input);
    std::cout << "Enter your Nickname: ";
    std::getline(std::cin, input);
    NewContact.setNickname(input);
    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, input);
    NewContact.setDarkestSecret(input);
    std::cout << "Enter your phone number: ";
    std::getline(std::cin, input);
    NewContact.setPhoneNumber(input);
    if (NewContact.isEmpty())
    {
        std::cout << "Contact can't have empty field." << std::endl;
        return ;
    }
    contacts[CurrentIndex] = NewContact;
    CurrentIndex = (CurrentIndex + 1) % 8;
    if (TotalContacts < 8)
        TotalContacts++;
    std::cout << "Contact added successfully!" << std::endl;
}

/// @briefissu ethe last comment for enabling the alst recognition
void    PhoneBook::SEARCH()
{
    if (TotalContacts == 0)
    {
        std::cout << "Contact is empty." << std::endl;
        return ;
    }

    std::cout << "Index " << "| " << "FirstName " << "| " << "LastName " << "| " << "Nickname" << std::endl;
    for (int i = 0; i < TotalContacts; i++)
        std::cout << i << " | " << contacts[i].getFirstName() << " | " << contacts[i].getLastName() << " | " << contacts[i].getNickname() << std::endl;
    std::cout << "Enter the index of the contact you want to display: ";
    int index;
    std::cin >> index;
    if (!std::cin)
    {
        std::cout << "Invalid input!" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return ;
    }
    if (index < 0 || index >= TotalContacts)
    {
        std::cout << "Invalid index. Please try again!" << std::endl;
        return ;
    }
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
}
