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
    // Animal obj;
    //Cant use Animal directly --> ABSTRACT CLASS

    Animal *emma;
    Dog dog;
    Cat cat;

    emma = &dog;
    emma->makeSound();
    emma = &cat;
    emma->makeSound();
    return(0);
}