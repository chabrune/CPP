#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
    private:
    std::string _target;

    public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);
    void execute(Bureaucrat const & executor) const;
};

#endif