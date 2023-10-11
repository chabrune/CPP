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

    Dog dog1;
    {
        Dog dog2 = dog1;
    }
    std::cout << dog1.getAttribut() << std::endl;

    return 0;
}