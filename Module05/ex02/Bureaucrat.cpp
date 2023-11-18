#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
    this->_grade = rhs._grade;
    return(*this);
}

std::ostream &operator<<(std::ostream& str, Bureaucrat const & ref)
{
    str << ref.getName() << ", buraucrat grade " << ref.getGrade();
    return(str);
}

std::string const Bureaucrat::getName( void ) const
{
    return(this->_name);
}
 int Bureaucrat::getGrade( void ) const
{
    return(this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

void Bureaucrat::incrementGrade( int points )
{
    if(this->_grade - points > 150)
        throw GradeTooLowException();
    if(this->_grade - points < 1)
        throw GradeTooHighException();
    this->_grade -= points;
}

void Bureaucrat::decrementGrade( int points )
{
    if(this->_grade + points > 150)
        throw GradeTooLowException();
    if(this->_grade + points < 1)
        throw GradeTooHighException();
    this->_grade += points;
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.check(*this);
    }
    catch(const AForm::GradeTooLowException())
    {
        std::cout << *this << " couldn't execute " << form.getName() << " because his grade is too low" << std::endl;
    }
    catch (const std::exception& e)
    {
		std::cout << form.getName() << " is not signed so " << this->_name << " couldn't execute it" << std::endl;
    }
}

void    Bureaucrat::signAForm(AForm & form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << *this << " signed " << form.getName() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << *this << " couldn't sign " << form.getName() << " because his grade is too low" << std::endl;
    }
}