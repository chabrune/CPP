#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
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
    (void)rhs;
    return(*this);
}

std::ostream& operator<<(std::ostream &str, Form const &ref)
{
    str << "Grade required to execute : " << ref.getGradeExec() << std::endl << "Name : " << ref.getName() << std::endl << "Grade required to sign : " << ref.getGradeSign() << std::endl;
    return(str);
}

int Form::getGradeSign( void ) const
{
    return(this->_gradeSign);
}

int Form::getGradeExec( void ) const
{
    return(this->_gradeExec);
}

Form::Form(Form const & copy) :  _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
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

void Form::beSigned(Bureaucrat &ref)
{
    std::cout << this->_gradeSign << " " << ref.getGrade() << std::endl;
//     if(this->_gradeSign >= ref.getGrade())
//         this->_signed = true;
//     else
//         throw(std::exception());
}

void    Form::signForm(Bureaucrat & ref) const
{
    if(this->_signed == true)
    {
        std::cout << ref.getName() << " signed " << this->_name << std::endl;
    }
    else
        std::cout << ref.getName() << " couldn't sign " << this->_name << " because " << this->_name << " required grade " << this->_gradeSign << " to be signed" << std::endl;
}