#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    {
        try
        {
            Form    f1("CERFA02", 0, 20);
            // Form    f2("CERFA03", 1, 155);
        }
        catch(std::exception & e)
        {
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    Bureaucrat Martine("titine", 109);
    Form    f1("CERFA02", 100, 20);
    Martine.incrementGrade(10);
    std::cout << Martine << std::endl;
    try
    {
        f1.beSigned(Martine);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
    f1.signForm(Martine);
    std::cout << f1 << std::endl;
    return(0);
}