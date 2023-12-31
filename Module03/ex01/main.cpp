/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:11 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/06 12:58:47 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap st1("Martine");
    ClapTrap ct1("Valerie");
    st1.attack("Valeriri");
    ct1.attack("Martitine");
    ct1.takeDamage(10);
    ct1.takeDamage(10);
    st1.guardGate();
}