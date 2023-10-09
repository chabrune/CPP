/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:28:55 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 16:53:37 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include <cstdlib>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal& operator=(Animal const & rhs);
    Animal(Animal const & copy);
    virtual void makeSound( void ) const = 0;
    virtual std::string getType( void ) const;
    virtual Brain* getAttribut() const = 0;
};

#endif