#pragma once

# include <vector>
# include <deque>
# include <iostream>
# include <cstdlib>
# include <string>
# include <stdexcept>
# include <limits>
# include <climits>
# include <ctime>

class PmergeMe
{
    public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe &rhs);
    PmergeMe(const PmergeMe &src);
    void handleInput(char **argv);
    void mergeVector(int first, int last, int mid);
    void mergeSortVector( int first, int last );
    void insertSortVector(int first, int last);
    void ft_print( void );
    void exec( void );
    void mergeDeque(int first, int last, int mid);
    void mergeSortDeque( int first, int last );
    void insertSortDeque(int first, int last);

    private:
    std::vector<int> _v;
    std::deque<int> _d;
};