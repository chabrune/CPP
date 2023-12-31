#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN &rhs)
{
    if(this != &rhs)
        this->_s = rhs._s;
    return *this;
}

RPN::RPN(const RPN &src)
{
    this->_s = src._s;
}

void RPN::handleError(std::string argv)
{
    if(argv.empty())
        return;
    if(argv.find('.') != std::string::npos)
        throw(std::logic_error("Error: must be integers"));
    int token = 0;
    int number = 0;
    for(int i = 0; argv[i]; i++)
    {
        if(!std::isdigit(argv[i]) && !std::isspace(argv[i]))
        {
            if(argv[i] == '+' || argv[i] == '-' || argv[i] == '/' || argv[i] == '*')
                token++;
            if(argv[i] != '+' && argv[i] != '-' && argv[i] != '/' && argv[i] != '*')
                throw(std::logic_error("Error"));
        }
        if(std::isdigit(argv[i]))
        {
            number++;
        }
        if(token == number && number != 0 && token != 0)
            throw(std::logic_error("Error"));
    }
    if(number != (token + 1) && argv.size() != 0)
        throw(std::logic_error("Error"));
}

void RPN::handleInput(std::string argv)
{
    if(argv.empty())
        return;
    for(size_t i = 0; i < argv.length(); ++i)
    {
        if(std::isdigit(argv[i]))
            this->_s.push(atoi(std::string(1, argv[i]).c_str()));
        else if(argv[i] == '/')
        {
            long long op1 = this->_s.top();
            if(op1 == 0)
            {
                std::cout << "Cannot divide by 0" << std::endl;
                return;
            }
            _s.pop();
            long long op2 = this->_s.top();
            _s.pop();
            _s.push(op2 / op1);
        }
        else if(argv[i] == '*')
        {
            long long op1 = this->_s.top();
            _s.pop();
            long long op2 = this->_s.top();
            _s.pop();
            _s.push(op2 * op1);
        }
        else if(argv[i] == '-')
        {
            long long op1 = this->_s.top();
            _s.pop();
            long long op2 = this->_s.top();
            _s.pop();
            _s.push(op2 - op1);
        }
        else if(argv[i] == '+')
        {
            long long op1 = this->_s.top();
            _s.pop();
            long long op2 = this->_s.top();
            _s.pop();
            _s.push(op2 + op1);
        }
    }
    std::cout << _s.top() << std::endl;
}
