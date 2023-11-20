#pragma once

#include <algorithm>
#include <iostream>
#include <deque>
#include <cstdlib>

class Span
{
    public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &source);
    Span& operator=(const Span &rhs);
    void addNumber(unsigned int add);
    void addNumber(std::deque<int>::iterator seqBegin, std::deque<int>::iterator seqEnd);
    std::deque<int>::iterator getItSpanBegin();
    std::deque<int>::iterator getItSpanEnd();
    int shortestSpan();
    int longestSpan();
    class FullSpanException : public std::exception
    {
        public:
        const char *what() const throw();
    };
    class EmptySpanException : public std::exception
    {
        public:
        const char *what() const throw();
    };
    private:
    std::deque<int> _span;
    unsigned int _N;
    Span();
};