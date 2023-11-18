#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    const std::string _name;
    bool _signed;
    const int _gradeSign;
    const int _gradeExec;

    public:
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw();

    };
    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw();

    };
    Form(Form const & copy);
    Form(std::string name, int gradeSign, int gradeExec);
    ~Form();
    Form& operator=(Form const & rhs);
    int getGradeSign( void ) const;
    int getGradeExec( void ) const;
    std::string getName( void ) const;
    bool getSign( void ) const;
    void    beSigned(const Bureaucrat &ref);
};

std::ostream& operator<<(std::ostream &str, Form const &ref);


#endif