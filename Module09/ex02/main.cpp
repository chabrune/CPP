#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        std::cout << "Already sorted" << std::endl;
    }
    try
    {
        PmergeMe fordj;
        fordj.handleInput(argv);
        fordj.exec();
    }
    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}