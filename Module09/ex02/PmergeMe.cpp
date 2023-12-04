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
        if(endPtr == argv[i] || *endPtr != '\0' || result > INT_MAX || result < INT_MIN || result < 0)
            throw(std::out_of_range("Error"));
        while(argv[i][++j])
        {
            if(!std::isdigit(argv[i][j]))
                throw(std::logic_error("Error"));
        }
        this->_v.push_back(result);
        this->_d.push_back(result);
    }
}

void    PmergeMe::ft_print( void )
{
    for(std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

void PmergeMe::exec( void )
{
    ft_merge_sort(0, this->_v.size() - 1);
    ft_print();
}

void PmergeMe::ft_merge_sort( int first, int last )
{
    if((last - first) < 1)
        return;
    int mid = (first + last) / 2;
    ft_merge_sort(first, mid);
    ft_merge_sort(mid + 1, last);
    ft_merge(first, last, mid);
}

void PmergeMe::ft_merge(int first, int last, int mid)
{
    int nL = mid - first + 1;
    int nR = last - mid;
    int i, j, k;
    int L[nL], R[nR];
    for (i = 0; i < nL; i++)
        L[i] = this->_v[first + i];
    for (j = 0; j < nR; j++)
        R[j] = this->_v[mid + 1 + j];
    i = 0; j = 0; k = first;
    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
            this->_v[k++] = L[i++];
        else
            this->_v[k++] = R[j++];
    }
    while (i < nL)
        this->_v[k++] = L[i++];
    while (j < nR)
        this->_v[k++] = R[j++];
}
