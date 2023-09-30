/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:47 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 20:49:51 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class  HumanB
{
	Weapon *_weaponB;
	std::string _name;

	public:
	HumanB(std::string name);
	void	setWeapon(Weapon &club);
	~HumanB();
	void attack();
};

#endif
