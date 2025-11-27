#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class   Contact 
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        // Contact();
        bool    isEmpty();
        void    setFirstName(std::string first);
        void    setLastName(std::string last);
        void    setNickname(std::string nick);
        void    setPhoneNumber(std::string number);
        void    setDarkestSecret(std::string darkest);
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};

#endif