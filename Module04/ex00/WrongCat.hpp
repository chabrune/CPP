/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:42:59 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 15:46:44 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
    std::string type;

    public:
    WrongCat();
    ~WrongCat();
    WrongCat& operator=(WrongCat const & rhs);
    WrongCat(WrongCat const & copy);
    void makeSound( void ) const;
    std::string getType( void ) const;
};

#endif