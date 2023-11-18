#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : AForm(copy)
{
    this->_target = copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    this->_target = rhs._target;
    return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->AForm::getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	if(!this->AForm::getSign())
		throw std::exception();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
