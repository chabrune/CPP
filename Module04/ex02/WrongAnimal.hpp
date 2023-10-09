/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:41:28 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 15:48:47 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
    std::string type;

    public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal& operator=(WrongAnimal const & rhs);
    WrongAnimal(WrongAnimal const & copy);
    void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif