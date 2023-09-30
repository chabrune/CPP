/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:47 by chabrune          #+#    #+#             */
/*   Updated: 2023/09/30 20:59:43 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class  HumanA
{
	Weapon &_weaponA;
	std::string _name;

	public:
	HumanA(std::string name, Weapon &type);
	~HumanA();
	void attack();
};

#endif
