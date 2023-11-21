#pragma once

template<typename T>
class MutantStack : public std::stack<T>
{
    typedef typename std::stack<T>::container_type::iterator iterator;

};