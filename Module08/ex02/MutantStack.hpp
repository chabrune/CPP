#pragma once

#include <stack>
#include <list>
#include <iostream>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    iterator begin(){ return(std::stack<T>::c.begin()); }
    iterator end(){ return(std::stack<T>::c.end()); }
    reverse_iterator rbegin() { return(std::stack<T>::c.rbegin()); }
    reverse_iterator rend() { return(std::stack<T>::c.rend()); }
    MutantStack() : std::stack<T>() {}
    MutantStack(const std::stack<T> &src) : std::stack<T>(src) {}
    MutantStack& operator=(const MutantStack& rhs){ std::stack<T>::operator=(rhs); return *this;}
    ~MutantStack(){}
};

//Encapsulation de c qui est un std::deque<T> par defaut
//containeur_type represente le type sous jaccent (generique)
//Acces a l'iterateur du type sous jaccent et en faire un alias pour acceder aux iterators deque : begin/end etc
