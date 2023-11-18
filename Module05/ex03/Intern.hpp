#ifndef INTERN_HPP
# define INTERN_HPP


# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
    Intern();
    ~Intern();
    Intern(Intern const & copy);
    Intern& operator=(Intern const & rhs);
    AForm* makeForm(std::string name, std::string target);
};

#endif
