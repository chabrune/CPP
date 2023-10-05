/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:11 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/05 18:57:11 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct("Charles");
    ct.attack("Emma");
    ct.takeDamage(3);
    ct.beRepaired(5);
    ct.beRepaired(1);
    ct.takeDamage(2);
    ct.takeDamage(6);
    ct.takeDamage(10);
    ct.takeDamage(15);
}