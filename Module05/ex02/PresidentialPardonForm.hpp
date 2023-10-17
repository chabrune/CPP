#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
    private:
    std::string _target;

    public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & copy);
    PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
    void execute(Bureaucrat const & executor) const;
};

#endif
