#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Intern::Intern(Intern const & copy)
{
    (void)copy;
}

Intern& Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return(*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm *f[3] = {new PresidentialPardonForm(target), new ShrubberyCreationForm(target), new RobotomyRequestForm(target)};
    std::string names[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
    AForm *save = 0;
    for(int i = 0; i < 3; i++)
    {
        if(name == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            save = f[i];
        }
        else
            delete f[i];
    }
    if(save == NULL)
        std::cout << "Can't find this type of forms" << std::endl;
    return(save);
}
