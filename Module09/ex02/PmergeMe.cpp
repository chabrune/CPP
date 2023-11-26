#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs)
{
    if(this != &rhs)
    {
        this->_d = rhs._d;
        this->_v = rhs._v;
    }
    return(*this);
}

PmergeMe::PmergeMe(const PmergeMe &src) :  _v(src._v), _d(src._d)
{}

void PmergeMe::handleInput(char **argv)
{
    int i = 0;
    while(argv[++i])
    {
        int j = -1;
        char *endPtr;
        long result = std::strtol(argv[i], &endPtr, 10);
        if(endPtr == argv[i] || !endPtr || result > INT_MAX || result < INT_MIN || result < 0)
            throw(std::out_of_range("Error"));
        this->_v.push_back(result);
        this->_d.push_back(result);
        while(argv[i][++j])
        {
            if(!std::isdigit(argv[i][j]))
                throw(std::logic_error("Error"));
        }
    }
}

void PmergeMe::ft_merge( void )
{
    int 
}