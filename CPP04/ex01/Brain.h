#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

# define RESET   "\033[0m"
# define BRED    "\e[1;31m"
# define BGREEN  "\e[1;32m"
# define BBLUE   "\e[1;34m"
# define YEL     "\e[1;33m"
# define BMAG    "\e[1;35m"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& src);
        Brain& operator=(const Brain& rhs);
        ~Brain();
};

#endif