
#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "----- STACK -----" << std::endl;
		MutantStack<int> mstack;
		mstack.push(10);
		mstack.push(50);
		mstack.push(70);
		mstack.push(90);
		mstack.pop();
		mstack.push(42);
		std::cout << std::boolalpha << "is mstack empty ? : " << mstack.empty() << " - size = " << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		for(; it != ite; ++it)
			std::cout << *it << std::endl;
		std::cout << std::endl <<  "Here with reverse iterator :" << std::endl;
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		for(; rit != rite; ++rit)
			std::cout << *rit << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "----- LIST -----" << std::endl;
		std::list<int> lst;
		lst.push_back(10);
		lst.push_back(50);
		lst.push_back(70);
		lst.push_back(90);
		lst.pop_back();
		lst.push_back(42);
		std::cout << std::boolalpha << "is lst empty ? : " << lst.empty() << " - size = " << lst.size() << std::endl;
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		for(; it != ite; ++it)
			std::cout << *it << std::endl;
		std::cout << std::endl <<  "Here with reverse iterator :" << std::endl;
		std::list<int>::reverse_iterator rit = lst.rbegin();
		std::list<int>::reverse_iterator rite = lst.rend();
		for(; rit != rite; ++rit)
			std::cout << *rit << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "----- DEQUE -----" << std::endl;
		std::deque<int> deq;
		deq.push_back(10);
		deq.push_back(50);
		deq.push_back(70);
		deq.push_back(90);
		deq.pop_back();
		deq.push_back(42);
		std::cout << std::boolalpha << "is deq empty ? : " << deq.empty() << " - size = " << deq.size() << std::endl;
		std::deque<int>::iterator it = deq.begin();
		std::deque<int>::iterator ite = deq.end();
		for(; it != ite; ++it)
			std::cout << *it << std::endl;
		std::cout << std::endl <<  "Here with reverse iterator :" << std::endl;
		std::deque<int>::reverse_iterator rit = deq.rbegin();
		std::deque<int>::reverse_iterator rite = deq.rend();
		for(; rit != rite; ++rit)
			std::cout << *rit << std::endl;
	}
}