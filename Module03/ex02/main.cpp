/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <chabrune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:11 by chabrune          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:01 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap ft1("Martine");
    ClapTrap ct1("Valerie");
    ct1.takeDamage(10);
    ct1.takeDamage(10);
    ft1.highFivesGuys();
}