/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:28:55 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 16:35:28 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal& operator=(Animal const & rhs);
    Animal(Animal const & copy);
    virtual void makeSound( void ) const;
    virtual std::string getType( void ) const;
};

#endif