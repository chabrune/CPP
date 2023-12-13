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
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::exec( void )
{
    std::cout << "Before: ";
    if(this->_v.size() > 10)
    {
        for(int i = 0; i < 4; i++)
            std::cout << this->_v[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    else
        ft_print();
    clock_t start, end;
    start = std::clock();
    mergeSortVector(0, this->_v.size() - 1);
    end = std::clock();
    double time = (((double)end - start));
    std::cout << "After: ";
        if(this->_v.size() > 10)
    {
        for(int i = 0; i < 4; i++)
            std::cout << this->_v[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    else
        ft_print();
    std::cout << "Time to process a range of " << this->_v.size() << " elements with std::vector<int>: " << time << "us" << std::endl;
    start = std::clock();
    mergeSortDeque(0, this->_d.size() - 1);
    end = std::clock();
    time = (((double)end - start));
    std::cout << "Time to process a range of " << this->_d.size() << " elements with std::deque<int>: " << time << "us" << std::endl;
}

void PmergeMe::insertSortVector( int first, int last )
{
    int i, j, k;
    for(i = first + 1; i <= last; i++)
    {
        k = this->_v[i];
        j = i - 1;
        while(j >= first && this->_v[j] > k)
        {
            this->_v[j + 1] = this->_v[j];
            j--;
        }
        this->_v[j + 1] = k;
    }
}

void PmergeMe::mergeSortVector( int first, int last )
{
    if((last - first) < 2)
    {
        insertSortVector(first, last);
        return;
    }
    int mid = (first + last) / 2;
    mergeSortVector(first, mid);
    mergeSortVector(mid + 1, last);
    mergeVector(first, last, mid);
}

void PmergeMe::mergeVector(int first, int last, int mid)
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

void PmergeMe::mergeDeque(int first, int last, int mid)
{
    int nL = mid - first + 1;
    int nR = last - mid;
    int i, j, k;
    int L[nL], R[nR];
    for (i = 0; i < nL; i++)
        L[i] = this->_d[first + i];
    for (j = 0; j < nR; j++)
        R[j] = this->_d[mid + 1 + j];
    i = 0; j = 0; k = first;
    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
            this->_d[k++] = L[i++];
        else
            this->_d[k++] = R[j++];
    }
    while (i < nL)
        this->_d[k++] = L[i++];
    while (j < nR)
        this->_d[k++] = R[j++];
}

void PmergeMe::mergeSortDeque( int first, int last )
{
    if((last - first) < 2)
    {
        insertSortDeque(first, last);
        return;
    }
    int mid = (first + last) / 2;
    mergeSortDeque(first, mid);
    mergeSortDeque(mid + 1, last);
    mergeDeque(first, last, mid);
}

void PmergeMe::insertSortDeque( int first, int last )
{
    int i, j, k;
    for(i = first + 1; i <= last; i++)
    {
        k = this->_d[i];
        j = i - 1;
        while(j >= first && this->_d[j] > k)
        {
            this->_d[j + 1] = this->_d[j];
            j--;
        }
        this->_d[j + 1] = k;
    }
}