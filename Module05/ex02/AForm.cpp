#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if(_gradeExec < 1 || _gradeSign < 1)
        throw(GradeTooHighException());
    if(gradeExec > 150 || _gradeSign > 150)
        throw(GradeTooLowException());
}

AForm::~AForm()
{}

const char* AForm::GradeTooHighException::what() const throw()
{
    return("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("Grade too low");
}

AForm& AForm::operator=(AForm const & rhs)
{
    (void)rhs;
    return(*this);
}

std::ostream& operator<<(std::ostream &str, AForm const &ref)
{
    str << "Grade required to execute : " << ref.getGradeExec() << std::endl << "Name : " << ref.getName() << std::endl << "Grade required to sign : " << ref.getGradeSign() << std::endl;
    return(str);
}

int AForm::getGradeSign( void ) const
{
    return(this->_gradeSign);
}

int AForm::getGradeExec( void ) const
{
    return(this->_gradeExec);
}

AForm::AForm(AForm const & copy) :  _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
}

std::string AForm::getName( void ) const
{
    return(this->_name);
}

bool AForm::getSign( void ) const
{
    return(this->_signed);
}

void AForm::beSigned(const Bureaucrat &ref)
{
    if(this->_gradeSign >= ref.getGrade())
        this->_signed = true;
    else
        throw(AForm::GradeTooLowException());
}

void AForm::check(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	if(!this->getSign())
		throw std::exception();
    execute(executor);
}