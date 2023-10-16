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
    str << ref.getName() << ", buraucrat grade " << ref.getGrade() << "." << std::endl;
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