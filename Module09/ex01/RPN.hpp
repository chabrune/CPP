#pragma once

# include <stack>
# include <iostream>
# include <cstdlib>
# include <string>
# include <stdexcept>

class RPN
{
    public:
    RPN();
    ~RPN();
    RPN& operator=(const RPN &rhs);
    RPN(const RPN &src);
    void handleError(std::string argv);
    void handleInput(std::string argv);

    private:
    std::stack<int> _s;
};