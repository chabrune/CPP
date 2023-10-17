#ifndef AFORM_HPP
# define AFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
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
    AForm(AForm const & copy);
    AForm(std::string name, int gradeSign, int gradeExec);
    ~AForm();
    AForm& operator=(AForm const & rhs);
    int getGradeSign( void ) const;
    int getGradeExec( void ) const;
    std::string getName( void ) const;
    bool getSign( void ) const;
    void    beSigned(const Bureaucrat &ref);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &str, AForm const &ref);


#endif