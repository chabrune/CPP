#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    if(grade < 1)
        throw Nath();
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

std::ostream &operator<<(std::ostream str, Bureaucrat const & ref)
{
    return(str << ref.getName() << ", buraucrat grade " << ref.getGrade() << "." << std::endl);
}

std::string const Bureaucrat::getName( void ) const
{
    return(this->_name);
}

unsigned int Bureaucrat::getGrade( void ) const
{
    return(this->_grade);
}