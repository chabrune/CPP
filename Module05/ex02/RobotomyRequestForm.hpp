#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
    private:
    std::string _target;

    public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
    void execute(Bureaucrat const & executor) const;
};

#endif