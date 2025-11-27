#include "Contact.hpp"

bool    Contact::isEmpty()
{
    return (FirstName.empty() || LastName.empty() || Nickname.empty() || PhoneNumber.empty() || DarkestSecret.empty());
}

void    Contact::setFirstName(std::string first)
{
    FirstName = first;
}

void    Contact::setLastName(std::string last)
{
    LastName = last;
}

void    Contact::setNickname(std::string nick)
{
    Nickname = nick;
}

void    Contact::setPhoneNumber(std::string phone)
{
    PhoneNumber = phone;
}

void    Contact::setDarkestSecret(std::string darkest)
{
    DarkestSecret = darkest;
}

std::string Contact::getFirstName()
{
    return FirstName;
}

std::string Contact::getLastName()
{
    return LastName;
}

std::string Contact::getNickname()
{
    return Nickname;
}

std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}