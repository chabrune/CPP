/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:36:44 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 15:38:59 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
    protected:
    std::string type;

    public:
    Dog();
    ~Dog();
    Dog& operator=(Dog const & rhs);
    Dog(Dog const & copy);
    void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif