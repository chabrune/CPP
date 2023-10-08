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
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;
    // std::cout << std::endl;
    // const Animal *(tab[4]);
    // for(int i = 0; i < 2; i++)
    //     tab[i] = new Dog();
    // std::cout << std::endl;
    // for(int j = 2; j < 4; j++)
    //     tab[j] = new Cat();
    // std::cout << std::endl;
    // for(int i = 0; i < 4; i++)
    //     delete tab[i];

    Dog *kiki = new Dog();
    Cat *grigri;
    // Dog & kikiref = kiki;
    // Cat & grigriref = grigri;

    // Dog copydog(kikiref);
    // Cat copycat(grigriref);

    // Dog & copydogref = copydog;
    // Cat & copycatref = copycat;

    // std::cout << std::endl;
    // std::cout << &copydogref << std::endl;
    // std::cout << &kiki << std::endl;
    // std::cout << std::endl;
    // std::cout << &copycatref << std::endl;
    // std::cout << &grigri << std::endl;
    // std::cout << std::endl;


    return 0;
}