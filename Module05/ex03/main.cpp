#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern *slave = 0;
	AForm *form1;
	AForm *form2;
	AForm *form3;
	form1 = slave->makeForm("PresidentialPardonForm", "Garden");
	form2 = slave->makeForm("ShrubberyCreationForm", "Waterpool");
	form3 = slave->makeForm("RobotomyRequestForm", "Kitchen");
	form3 = slave->makeForm("lol", "Kitchen");
	delete form1;
	delete form2;
	delete form3;
}