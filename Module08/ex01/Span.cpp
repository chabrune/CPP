#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{}

Span::~Span()
{}

Span::Span(const Span &src)
{
    this->_N = src._N;
    this->_span = src._span;
}

Span& Span::operator=(const Span &rhs)
{
    this->_N = rhs._N;
    this->_span = rhs._span;
    return(*this);
}

void Span::addNumber(unsigned int add)
{
    if(this->_span.size() == _N)
        throw(Span::FullSpanException());
    this->_span.push_back(add);
}



std::deque<int>::iterator Span::getItSpanBegin() 
{
    return(this->_span.begin());
}

std::deque<int>::iterator Span::getItSpanEnd()
{
    return(this->_span.end());
}

int Span::shortestSpan()
{
    if(this->_N <= 1 || this->_span.size() <= 1)
        throw(Span::EmptySpanException());
    std::deque<int> tmp = this->_span;
    std::sort(tmp.begin(), tmp.end());
    std::deque<int>::iterator it = tmp.begin();
    std::deque<int>::iterator ite = tmp.end();
    int shortest = std::abs(*it - *(it + 1));
    for(; it != ite; ++it)
    {
        if(std::abs(*it - *(it + 1)) < shortest)
            shortest = std::abs(*it - *(it + 1));
    }
    return(shortest);
}

int Span::longestSpan()
{
    if(this->_N <= 1 || this->_span.size() <= 1)
        throw(Span::EmptySpanException());
    std::deque<int> tmp = this->_span;
    std::sort(tmp.begin(), tmp.end());
    std::deque<int>::iterator it = tmp.begin();
    std::deque<int>::iterator ite = tmp.end();
    return(std::abs(*it - *(ite - 1)));
}

const char* Span::FullSpanException::what() const throw()
{
    return("Span is full");
}

const char* Span::EmptySpanException::what() const throw()
{
    return("Span empty or only 1 element");
}

void Span::addNumber(std::deque<int>::const_iterator seqBegin, std::deque<int>::const_iterator seqEnd)
{
    if((this->_span.size() + std::distance(seqBegin, seqEnd)) > this->_N)
        throw(FullSpanException());
    this->_span.insert(this->_span.end(), seqBegin, seqEnd);
}
