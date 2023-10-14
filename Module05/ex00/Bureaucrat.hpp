#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
    private:
    const std::string _name;
    int _grade;

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
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & copy);
    Bureaucrat& operator=(Bureaucrat const & rhs);
    std::string const getName( void ) const;
    int getGrade( void ) const;
    void incrementGrade( int points );
    void decrementGrade( int points );
};

std::ostream& operator<<(std::ostream &str, Bureaucrat const & ref);

#endif