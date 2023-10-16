#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    this->_signed = false;
    if(_gradeExec < 1 || _gradeSign < 1)
        throw(GradeTooHighException());
    if(gradeExec > 150 || _gradeSign > 150)
        throw(GradeTooLowException());
}

Form::~Form()
{}

const char* Form::GradeTooHighException::what() const throw()
{
    return("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

Form& Form::operator=(Form const & rhs)
{
    return(*this);
}

std::ostream& operator<<(std::ostream &str, Form const &ref)
{
    str << ref.getGradeExec() << " " << ref.getName() << " " << ref.getGradeSign() << std::endl;
}

int Form::getGradeSign( void ) const
{
    return(this->_gradeSign);
}

int Form::getGradeExec( void ) const
{
    return(this->_gradeExec);
}

Form::Form(Form const & copy) : _gradeExec(copy._gradeExec), _gradeSign(copy._gradeSign), _name(copy._name)
{
    *this = copy;
}

std::string Form::getName( void ) const
{
    return(this->_name);
}

bool Form::getSign( void ) const
{
    return(this->_signed);
}