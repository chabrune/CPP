/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:35:40 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/08 19:58:25 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
    protected:
    std::string type;

    public:
    Cat();
    ~Cat();
    Cat& operator=(Cat const & rhs);
    Cat(Cat const & copy);
    void makeSound( void ) const;
    std::string getType( void ) const;

    private:
    Brain *_attribut;
};

#endif