/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:24 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/05 20:01:36 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>

class ClapTrap
{
    protected:

    std::string _name;
    unsigned int _Health;
    unsigned int _Attack;
    unsigned int _Energy;

    public:

    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const & copy);
	ClapTrap & operator=(ClapTrap const & rhs);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int getAttack() const;
    std::string getName() const;
    unsigned int getEnergy() const;
    unsigned int getHealth() const;
    static bool alreadyDead;
};


#endif