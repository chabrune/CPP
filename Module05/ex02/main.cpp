#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	// {
	// 	Bureaucrat Martine("titine", 1);
	// 	ShrubberyCreationForm scf("home");
	// 	scf.beSigned(Martine);
	// 	try
	// 	{
	// 		Martine.executeForm(scf);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cerr << e.what() << std::endl;

	// 	}
	// }
	
	// {
	// 	Bureaucrat Martine("titine", 150);
	// 	PresidentialPardonForm ppf("ohmygad");
	// 	try
	// 	{
	// 		ppf.beSigned(Martine);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cerr << e.what() << std::endl;

	// 	}
	// 	try
	// 	{
	// 		Martine.executeForm(ppf);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cerr << e.what() << std::endl;

	// 	}
	// }

	{
		Bureaucrat Martine("titine", 1);
		RobotomyRequestForm rrf("home");
		Martine.signAForm(rrf);
		Martine.executeForm(rrf);
		try
		{
			rrf.execute(Martine);
		}
		catch (const AForm::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		// catch (const std::exception& e)
		// {
		// 	std::cerr << e.what() << std::endl;

		// }
	}

}