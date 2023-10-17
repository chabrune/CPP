#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : AForm(copy)
{
    this->_target = copy._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    this->_target = rhs._target;
    return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(executor.getGrade() > this->AForm::getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	if(!this->AForm::getSign())
		throw std::exception();
    std::cout << "some drilling noises" << std::endl;
    srand (time(NULL));
	if (rand() % 2 < 1)
		std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << this->_target << " escape from robotmization" << std::endl;
}