/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:28:24 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:58:18 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Test.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << std::endl;
    const Animal *(tab[4]);
    for(int i = 0; i < 2; i++)
    {
        tab[i] = new Dog();
        std::cout << tab[i]->getType() << std::endl;
    }
    for(int j = 2; j < 4; j++)
    {
        tab[j] = new Cat();
        std::cout << tab[j]->getType() << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < 4; i++)
        delete tab[i];

    Test sobj1(42);
    Test sobj2 = sobj1;
    std::cout << "Shallow copy" << std::endl;
    std::cout << "Objet 1 value " << sobj1.n << std::endl;
    std::cout << "Objet 2 value " << sobj2.n << std::endl;
    std::cout << std::endl;
    Test2 dobj1(42);
    Test2 dobj2(dobj1); 
    std::cout << "Deep copy" << std::endl;
    std::cout << "Objet 1 value " << dobj1.n << std::endl;
    std::cout << "Objet 2 value " << dobj2.n << std::endl;
    std::cout << std::endl;

    dobj1.n = 21; // Modifying dobj1 should NOT affect dobj2
    std::cout << "Modifying Objet 1 value souldnt affect Object 2 value --- objet1.n = 21" << std::endl;
    std::cout << std::endl;

    std::cout << "Object 1 value " << dobj1.n << std::endl;
    std::cout << "Object 2 value " << dobj2.n << std::endl;

    return 0;
}