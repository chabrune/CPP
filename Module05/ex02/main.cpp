#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		Bureaucrat Martine("titine", 1);
		ShrubberyCreationForm scf("home");
		Martine.signAForm(scf);
		try
		{
			Martine.executeForm(scf);
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;

		}
	}
	
	{
		Bureaucrat Martine("titine", 150);
		PresidentialPardonForm ppf("ohmygad");
		Martine.signAForm(ppf);
	}

	{
		Bureaucrat Martine("titine", 1);
		RobotomyRequestForm rrf("home");
		Martine.signAForm(rrf);
		Martine.executeForm(rrf);
	}

}