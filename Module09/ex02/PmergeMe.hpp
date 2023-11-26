#pragma once

# include <vector>
# include <deque>
# include <iostream>
# include <cstdlib>
# include <string>
# include <stdexcept>
# include <limits>
# include <climits>

class PmergeMe
{
    public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe &rhs);
    PmergeMe(const PmergeMe &src);
    void handleInput(char **argv);
    void ft_merge( void );


    private:
    std::vector<int> _v;
    std::deque<int> _d;
};