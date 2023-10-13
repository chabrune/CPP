#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
    private:
    const std::string _name;
    unsigned int _grade;
	class Nath : public std::exception
	{
		const char* what() const throw()
		{
			return("LOL");
		}
	};

    public:
    Bureaucrat(const std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & copy);
    Bureaucrat& operator=(Bureaucrat const & rhs);
    std::string const getName( void ) const;
    unsigned int getGrade( void ) const;
};

std::ostream &operator<<(std::ostream str, Bureaucrat const & ref);

#endif